#include<iostream>
using namespace std;

int main() {
	int maxL(int nums[], int length);

	int nums[100] = { 0 };
	int cnt=0;
	while (cin >> nums[cnt]) cnt++;

	int res = 0;
	int cur = 0;
	int flr = 1;
	int s = 0;
	do
	{
		cur = maxL(nums, cnt);
		s = cur * flr;
		res = res < s ? s : res;
		for (int i = 0; i < cnt; i++) nums[i]--;
		flr++;
	} while (cur);
	
	cout << res << endl;
}

int maxL(int nums[],int length) {
	int res = 0;
	int cur = 0;
	for (int i = 0; i < length; i++)
	{
		if (nums[i] > 0) {
			cur++;
		}
		else
		{
			res = res < cur ? cur : res;
			cur = 0;
		}
	}
	res = res < cur ? cur : res;
	return res;
}
