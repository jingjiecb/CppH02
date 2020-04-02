#include<iostream>
#include<algorithm>
using namespace std;
#define LENGTH 1000

int main() {
	int cnt=0;
	long long nums[LENGTH] = { 0 };
	while (cin >> nums[cnt++]);
	cnt--;
	sort(nums, nums + cnt);
	long long last = nums[0];
	int cur = 1;
	int res = 1;
	for (int i = 1; i < cnt; i++)
	{
		if (nums[i] == last) continue;
		else if (nums[i] == last + 1) {
			cur++;
			res = cur > res ? cur : res;
		}
		else {
			cur = 1;
		}
		last = nums[i];
	}
	cout << res << endl;
}