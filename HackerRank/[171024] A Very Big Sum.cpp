#include <vector>
#include <iostream>

// https://www.hackerrank.com/challenges/a-very-big-sum/problem

using namespace std;

unsigned long aVeryBigSum(int n, vector <long> ar)
{
	long result = 0;

	for (const auto& i : ar)
	{
		result += i;
	}

	return result;
}

//int main()
//{
//	int n;
//	cin >> n;
//	vector<long> ar(n);
//	for (int ar_i = 0; ar_i < n; ar_i++) {
//		cin >> ar[ar_i];
//	}
//	long result = aVeryBigSum(n, ar);
//	cout << result << endl;
//	return 0;
//}
