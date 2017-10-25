#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// https://www.hackerrank.com/challenges/plus-minus/problem

//int main() 
//{
//	int n;
//	cin >> n;
//	vector<int> arr(n);
//	for (int arr_i = 0; arr_i < n; arr_i++) {
//		cin >> arr[arr_i];
//	}
//
//	int positiveNumber = 0;
//	int negativeNumber = 0;
//	int zeroNumber = 0;
//
//	for (const auto& i : arr)
//	{
//		if (i > 0)
//		{
//			++positiveNumber;
//		}
//		else if (i < 0)
//		{
//			++negativeNumber;
//		}
//		else
//		{
//			++zeroNumber;
//		}
//	}
//
//	int size = arr.size();
//	float positiveDiv = (float)positiveNumber / (float)size;
//	float negativeDiv = (float)negativeNumber / (float)size;
//	float zeroDiv = (float)zeroNumber / (float)size;
//
//	cout << positiveDiv << endl;
//	cout << negativeDiv << endl;
//	cout << zeroDiv << endl;
//
//	return 0;
//}
