#include <vector>
#include <iostream>

// https://www.hackerrank.com/challenges/compare-the-triplets/problem

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2)
{
	int aliceScore = 0;
	int bobScore = 0;

	if (a0 > b0)
	{
		aliceScore++;
	}
	else if (a0 < b0)
	{
		bobScore++;
	}

	if (a1 > b1)
	{
		aliceScore++;
	}
	else if (a1 < b1)
	{
		bobScore++;
	}

	if (a2 > b2)
	{
		aliceScore++;
	}
	else if (a2 < b2)
	{
		bobScore++;
	}

	vector<int> resultVector{ aliceScore, bobScore };

	return resultVector;
}

//int main() {
//	int a0;
//	int a1;
//	int a2;
//	cin >> a0 >> a1 >> a2;
//	int b0;
//	int b1;
//	int b2;
//	cin >> b0 >> b1 >> b2;
//	vector < int > result = solve(a0, a1, a2, b0, b1, b2);
//	for (size_t i = 0; i < result.size(); i++) {
//		cout << result[i] << (i != result.size() - 1 ? " " : "");
//	}
//	cout << endl;
//
//
//	return 0;
//}
