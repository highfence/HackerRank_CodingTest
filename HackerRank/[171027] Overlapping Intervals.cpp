//
//// http://practice.geeksforgeeks.org/problems/overlapping-intervals/0
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int inputCaseNumber = 0;
//	cin >> inputCaseNumber;
//
//	vector<vector<pair<int, int>>> inputCases;
//
//	for (auto curCaseNumber = 0; curCaseNumber < inputCaseNumber; ++curCaseNumber)
//	{
//		int pairNumber = 0;
//		cin >> pairNumber;
//
//		vector<pair<int, int>> intervals;
//
//		for (auto curPairNumber = 0; curPairNumber < pairNumber; ++curPairNumber)
//		{
//			int firstNumber = 0;
//			int secondNumber = 0;
//			cin >> firstNumber;
//			cin >> secondNumber;
//
//			intervals.emplace_back(firstNumber, secondNumber);
//		}
//
//		// 첫번째 인자를 기준으로 오름차순으로 정렬.
//		sort(intervals.begin(), intervals.end());
//
//		inputCases.push_back(intervals);
//	}
//
//	for (const auto& inputCase : inputCases)
//	{
//		vector<pair<int, int>> finalPairs;
//
//		auto currentPair = inputCase.front();
//
//		for (const auto& intervalPair : inputCase)
//		{
//			// 현재 페어의 뒷 자리 보다 다음 페어의 앞 자리가 크다면
//			if (currentPair.second >= intervalPair.first)
//			{
//				// 페어를 합쳐준다.
//				currentPair.second = (currentPair.second > intervalPair.second) ? currentPair.second : intervalPair.second;
//			}
//			else
//			{
//				// 그렇지 않다면 현재 들고있던 페어를 최종 벡터에 넣어주고, 새로운 페어를 든다.
//				finalPairs.push_back(currentPair);
//
//				currentPair = intervalPair;
//			}
//		}
//
//		// 마지막까지 들고있던 페어를 최종 벡터에 넣어준다.
//		finalPairs.push_back(currentPair);
//
//		// 최종 출력
//		for (const auto& pair : finalPairs)
//		{
//			cout << pair.first << " " << pair.second << " ";
//		}
//
//		cout << endl;
//	}
//
//	getchar();
//
//	return 0;
//}