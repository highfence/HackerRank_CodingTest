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

// Interval에 대한 비교 함수 제공.
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

	// STDIN으로 들어오는 열차 정보 저장.
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

	// 총 셀의 개수
	long long remainCells = row * column;

	// 만약 열차 정보가 없다면 그냥 출력하고 끝.
	if (trainNumber <= 0)
	{
		cout << remainCells;
		return 0;
	}

	// 열차 정보 받은 것을 소팅.
	sort(intervalVector.begin(), intervalVector.end(), compareInterval);

	int currentRow = intervalVector.front().row;
	int currentStart = intervalVector.front().start;
	int currentEnd = intervalVector.front().end;

	for (const auto& intervalInfo : intervalVector)
	{
		// 만약 현재 들고있는 정보와 해당 정보의 Row가 같은지 확인.
		if (currentRow == intervalInfo.row)
		{
			// 같은 Row의 정보라면 Merge가 가능한지 확인해준다.
			if (currentEnd >= intervalInfo.start)
			{
				// Merge하고 다음 Interval 정보로 넘어간다.
				currentEnd = (currentEnd > intervalInfo.end) ? currentEnd : intervalInfo.end;
				continue;
			}
		}

		// Row가 다르거나, Merge가 불가능 한 경우,
		// 들고있던 정보를 셀 개수에서 빼준 뒤, 새로운 정보를 든다.
		remainCells -= (currentEnd - currentStart + 1);

		currentRow = intervalInfo.row;
		currentStart = intervalInfo.start;
		currentEnd = intervalInfo.end;
	}

	// 마지막으로 들고 있던 정보에 대해서도 처리.
	remainCells -= (currentEnd - currentStart + 1);

	cout << remainCells;

	return 0;
}
