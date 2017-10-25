#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/birthday-cake-candles/problem

int birthdayCakeCandles(int n, vector <int> ar) 
{
	sort(ar.begin(), ar.end());

	int curCount = 0;
	int curIdx = 0;
	int maxCount = 0;

	for (const auto& i : ar)
	{
		if (curIdx != i)
		{
			maxCount = (maxCount > curCount) ? maxCount : curCount;

			curCount = 0;
			curIdx = i;
		}

		++curCount;
	}

	maxCount = (maxCount > curCount) ? maxCount : curCount;
	
	return maxCount;
}

//
//int main(void)
//{
//	vector<int> ar = { 3, 2, 1, 3 };
//
//	cout << birthdayCakeCandles(4, ar) << endl;
//
//	getchar();
//
//	return 0;
//}
