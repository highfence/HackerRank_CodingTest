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
//		// 현재 포지션이 curHousePos + range을 벗어나는 지점까지 이동한다.
//		do
//		{
//			++curHouseIdx;
//			if (curHouseIdx >= houses.size()) break;
//		} while (startHousePos + range >= houses[curHouseIdx]);
//
//		// 벗어나는 지점 직전의 포지션으로 이동한다.
//		--curHouseIdx;
//
//		// 직전의 포지션을 라디오 설치 지점으로 삼는다.
//		coverHousePos = houses[curHouseIdx];
//
//		// 현재 포지션이 설치지점위치 + range를 벗어나는 지점까지 이동한다.
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