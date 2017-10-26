#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/gridland-metro/problem

class TrainInfo
{
public :
	TrainInfo(int row, int startCol, int endCol)
		: _row(row), _startCol(startCol), _endCol(endCol) {}

	int _row = 0;
	int _startCol = 0;
	int _endCol = 0;
};

int main() 
{
	int row;
	int column;
	int trainNumber;

	cin >> row;
	cin >> column;
	cin >> trainNumber;

	vector<TrainInfo> infoVec;

	for (auto curTrainNumber = 0; curTrainNumber < trainNumber; ++curTrainNumber)
	{
		int trainRow;
		int trainStartIdx;
		int trainEndIdx;

		cin >> trainRow;
		cin >> trainStartIdx;
		cin >> trainEndIdx;

		TrainInfo newInfo(trainRow, trainStartIdx, trainEndIdx);
		infoVec.push_back(newInfo);
	}

	int ** landArray = new int*[row];

	for (auto rowIdx = 0; rowIdx < row; ++rowIdx)
	{
		landArray[rowIdx] = new int[column];
		fill_n(landArray[rowIdx], column, 0);
	}

	long long remainCells = row * column;
	for (const auto& info : infoVec)
	{
		for (auto curColIdx = info._startCol - 1; curColIdx < info._endCol; ++curColIdx)
		{
			if (landArray[info._row - 1][curColIdx] != 1)
			{
				landArray[info._row - 1][curColIdx] = 1;
				--remainCells;
			}
		}
	}

	for (auto rowIdx = 0; rowIdx < row; ++rowIdx)
	{
		delete [] landArray[rowIdx];
	}

	delete [] landArray;

	infoVec.clear();

	cout << remainCells;

	return 0;
}
