#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

// https://www.hackerrank.com/challenges/diagonal-difference/problem



//int main()
//{
//	int n;
//	int primaryDigonalSum = 0;
//	int secondaryDigonalSum = 0;
//
//	scanf("%d", &n);
//	int a[n][n];
//	for (int a_i = 0; a_i < n; a_i++) {
//		for (int a_j = 0; a_j < n; a_j++) {
//
//			scanf("%d", &a[a_i][a_j]);
//		}
//	}
//
//	for (int row = 0; row < n; ++row)
//	{
//		int column = row;
//		primaryDigonalSum += a[row][column];
//	}
//
//	for (int row = 0; row < n; ++row)
//	{
//		int column = n - 1 - row;
//		secondaryDigonalSum += a[row][column];
//	}
//
//	int result = (primaryDigonalSum < secondaryDigonalSum) ? secondaryDigonalSum - primaryDigonalSum : primaryDigonalSum - secondaryDigonalSum;
//	printf("%d", result);
//
//	return 0;
//}
