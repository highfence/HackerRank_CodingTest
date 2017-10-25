#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/mini-max-sum/problem
//
//int main() 
//{
//	vector<int> arr(5);
//	for (int arr_i = 0; arr_i < 5; arr_i++) 
//	{
//		cin >> arr[arr_i];
//	}
//
//	unsigned long long exceptValues[5] = { 0, };
//
//	for (auto i = 0; i < 5; ++i)
//	{
//		for (auto j = 0; j < 5; ++j)
//		{
//			if (i != j)
//			{
//				exceptValues[j] += arr[i];
//			}
//		}
//	}
//
//	unsigned long long maxValue = exceptValues[0];
//	unsigned long long minValue = exceptValues[0];
//
//	for (auto i = 1; i < 5; ++i)
//	{
//		maxValue = (maxValue > exceptValues[i]) ? maxValue : exceptValues[i];
//		minValue = (minValue < exceptValues[i]) ? minValue : exceptValues[i];
//	}
//
//	cout << minValue << " " << maxValue;
//
//	return 0;
//}
