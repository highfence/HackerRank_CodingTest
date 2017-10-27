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
//		// ù��° ���ڸ� �������� ������������ ����.
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
//			// ���� ����� �� �ڸ� ���� ���� ����� �� �ڸ��� ũ�ٸ�
//			if (currentPair.second >= intervalPair.first)
//			{
//				// �� �����ش�.
//				currentPair.second = (currentPair.second > intervalPair.second) ? currentPair.second : intervalPair.second;
//			}
//			else
//			{
//				// �׷��� �ʴٸ� ���� ����ִ� �� ���� ���Ϳ� �־��ְ�, ���ο� �� ���.
//				finalPairs.push_back(currentPair);
//
//				currentPair = intervalPair;
//			}
//		}
//
//		// ���������� ����ִ� �� ���� ���Ϳ� �־��ش�.
//		finalPairs.push_back(currentPair);
//
//		// ���� ���
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