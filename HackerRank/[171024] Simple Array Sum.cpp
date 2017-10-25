#include <vector>
#include <iostream>

using namespace std;

int simpleArraySum(int n, vector <int> ar)
{
	int result = 0;

	for (const auto& number : ar)
	{
		result += number;
	}

	return result;
}

//int main() {
//	int n;
//	cin >> n;
//	vector<int> ar(n);
//	for (int ar_i = 0; ar_i < n; ar_i++) {
//		cin >> ar[ar_i];
//	}
//	int result = simpleArraySum(n, ar);
//	cout << result << endl;
//	return 0;
//}
