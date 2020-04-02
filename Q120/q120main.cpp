#include<iostream>
using namespace std;
#define LEN 1000

int main() {
	int nums[LEN] = { 0 };

	char c;
	int num;
	cin >> c;
	if (cin.peek() == ']') {
		cout << 1;
		return 0;
	}
	do
	{
		cin >> num >> c;
		if (num > 0) nums[num] = 1;
	} while (c!=']');

	int i;
	for (i = 1; i < LEN; i++)
	{
		if (nums[i] == 0) break;
	}
	cout << i;
}