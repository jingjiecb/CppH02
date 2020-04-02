//题目：
//给定一个包含 n 个整数的数组 nums 和一个目标值 target，判断 nums 中是否存在四个元素 a，b，c
//和 d ，使得 a + b + c + d 的值与 target 相等？找出所有满足条件且不重复的四元组。
//参考https://leetcode-cn.com/problems/4sum/solution/shuang-zhi-zhen-jie-fa-can-zhao-san-shu-zhi-he-ge-/
#include<iostream>
using namespace std;

int main() {
	//函数原型区
	int getin(int*);
	void putout(int*, int);
	void sort(int* src, int length);

	//输入
	int nums[1000];
	int length = getin(nums);
	int des;
	cin >> des;
	if (length <4) {
		cout << -1;
		return 0;
	}

	sort(nums, length);
	int res[1000][4];
	int cnt = 0;
	for (int i = 0; i < length-3; i++)
	{
		if (i > 0 && nums[i] == nums[i - 1]) continue;
		for (int j = i+1; j < length-2; j++)
		{
			if (j > i + 1 && nums[j] == nums[j - 1]) continue;
			int k = j + 1;
			int l = length - 1;
			while (k<l)
			{
				int sum = nums[i] + nums[j] + nums[k] + nums[l];
				if (sum<des)
				{
					while (k < l && nums[k] == nums[k+1]) k++;
					k++;
				}
				else if(sum>des)
				{
					while (k < l&&nums[l] == nums[l-1]) l--;
					l--;
				}
				else
				{
					res[cnt][0] = nums[i];
					res[cnt][1] = nums[j];
					res[cnt][2] = nums[k];
					res[cnt][3] = nums[l];
					cnt++;
					while (k < l && nums[l] == nums[l-1]) l--;
					l--;
					while (k < l && nums[k] == nums[k+1]) k++;
					k++;
				}
			}
		}
	}

	if (cnt == 0) {
		cout << -1;
		return 0;
	}
	for (int i = 0; i < cnt; i++) {
		putout(res[i],4);
	}
}

//输入方法，返回值为输入的数组长度。
int getin(int* des) {
	char c;
	cin >> c;
	int cnt = 0;
	while (c!=']')
	{
		if (cin.peek() == ']') {
			cin >> c;
			return 0;
		}
		cin >> des[cnt] >> c;
		cnt++;
	}
	return cnt;
}

//输出方法，以 [1, 2, 3]的形式。参数：数组，长度。
void putout(int* src,int len) {
	cout << '[';
	for (int i = 0; i < len; i++)
	{
		cout << src[i];
		if (i==len-1)
		{
			cout << ']' << endl;;
		}
		else
		{
			cout << ", ";
		}
	}
}

//对数组进行冒泡排序
void sort(int* src,int length) {
	for (int i = length - 1; i > 0; i--) {
		for (int j = 0; j < i; j++)
		{
			if (src[j] > src[j+1])
			{
				char tmp = src[j];
				src[j] = src[j+1];
				src[j+1] = tmp;
			}
		}
	}
}