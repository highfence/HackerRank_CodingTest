#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//int main()
//{
//	int n;
//	int range = 1;
//	vector<int> houses = { 1, 2, 3, 4, 5 };
//
//	sort(houses.begin(), houses.end());
//
//	int startHousePos = 0;
//	int coverHousePos = 0;
//	int curHouseIdx = 0;
//	int result = 0;
//
//	while (curHouseIdx < houses.size())
//	{
//		++result;
//		startHousePos = houses[curHouseIdx];
//		
//		// ���� �������� curHousePos + range�� ����� �������� �̵��Ѵ�.
//		do
//		{
//			++curHouseIdx;
//			if (curHouseIdx >= houses.size()) break;
//		} while (startHousePos + range >= houses[curHouseIdx]);
//
//		// ����� ���� ������ ���������� �̵��Ѵ�.
//		--curHouseIdx;
//
//		// ������ �������� ���� ��ġ �������� ��´�.
//		coverHousePos = houses[curHouseIdx];
//
//		// ���� �������� ��ġ������ġ + range�� ����� �������� �̵��Ѵ�.
//		do
//		{
//			++curHouseIdx;
//			if (curHouseIdx >= houses.size()) break;
//		} while (coverHousePos + range >= houses[curHouseIdx]);
//	}
//
//	cout << result;
//
//	return 0;
//}