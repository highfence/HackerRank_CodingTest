#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/gridland-metro/problem

struct Interval
{
	int row;
	int start;
	int end;
};

// Interval�� ���� �� �Լ� ����.
bool compareInterval(Interval i1, Interval i2)
{
	if (i1.row < i2.row)
	{
		return true;
	}
	else if (i1.row == i2.row)
	{
		if (i1.start < i2.start)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

int main() 
{
	long row;
	long column;
	long trainNumber;

	cin >> row;
	cin >> column;
	cin >> trainNumber;

	vector<Interval> intervalVector;

	// STDIN���� ������ ���� ���� ����.
	for (auto curTrainNumber = 0; curTrainNumber < trainNumber; ++curTrainNumber)
	{
		int trainRow;
		int trainStartIdx;
		int trainEndIdx;

		cin >> trainRow;
		cin >> trainStartIdx;
		cin >> trainEndIdx;

		Interval newInterval;
		newInterval.row = trainRow;
		newInterval.start = trainStartIdx;
		newInterval.end = trainEndIdx;
		
		intervalVector.push_back(newInterval);
	}

	// �� ���� ����
	long long remainCells = row * column;

	// ���� ���� ������ ���ٸ� �׳� ����ϰ� ��.
	if (trainNumber <= 0)
	{
		cout << remainCells;
		return 0;
	}

	// ���� ���� ���� ���� ����.
	sort(intervalVector.begin(), intervalVector.end(), compareInterval);

	int currentRow = intervalVector.front().row;
	int currentStart = intervalVector.front().start;
	int currentEnd = intervalVector.front().end;

	for (const auto& intervalInfo : intervalVector)
	{
		// ���� ���� ����ִ� ������ �ش� ������ Row�� ������ Ȯ��.
		if (currentRow == intervalInfo.row)
		{
			// ���� Row�� ������� Merge�� �������� Ȯ�����ش�.
			if (currentEnd >= intervalInfo.start)
			{
				// Merge�ϰ� ���� Interval ������ �Ѿ��.
				currentEnd = (currentEnd > intervalInfo.end) ? currentEnd : intervalInfo.end;
				continue;
			}
		}

		// Row�� �ٸ��ų�, Merge�� �Ұ��� �� ���,
		// ����ִ� ������ �� �������� ���� ��, ���ο� ������ ���.
		remainCells -= (currentEnd - currentStart + 1);

		currentRow = intervalInfo.row;
		currentStart = intervalInfo.start;
		currentEnd = intervalInfo.end;
	}

	// ���������� ��� �ִ� ������ ���ؼ��� ó��.
	remainCells -= (currentEnd - currentStart + 1);

	cout << remainCells;

	return 0;
}
