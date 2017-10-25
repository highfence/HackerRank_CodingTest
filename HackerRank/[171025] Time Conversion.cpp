#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// https://www.hackerrank.com/challenges/time-conversion/problem

string timeConversion(string s)
{
	int hour = stoi(s.substr(0, 2));
	int minute = stoi(s.substr(3, 2));
	int second = stoi(s.substr(6, 2));

	string noonStr = s.substr(8, 2);

	if (noonStr == "PM")
	{
		if (hour != 12)
		{
			hour += 12;
		}
	}
	else 
	{
		if (hour == 12)
		{
			hour = 0;
		}
	}

	string hourStr = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
	string minuteStr = (minute < 10) ? "0" + to_string(minute) : to_string(minute);
	string secondStr = (second < 10) ? "0" + to_string(second) : to_string(second);

	string result = hourStr + ":" + minuteStr + ":" + secondStr;

	return result;
}

//int main() {
//	string s = "12:45:54PM";
//	string result = timeConversion(s);
//	cout << result << endl;
//
//	getchar();
//	return 0;
//}
