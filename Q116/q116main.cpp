//题目：
//给定一个字符串，利用统计字符重复出现次数，实现该字符串的压缩功能。
#include<iostream>
using namespace std;

int main() {
	int itsplus(char*, int);

	char src[1000] = { 0 };
	cin >> src;
	int length = strlen(src);
	char res[1000] = { 0 };

	int cnt1 = 0;
	int chcnt = 1;
	char last = src[0];

	for (int i = 1; i < length; i++) {
		if (src[i] == last) {
			chcnt++;
		}
		else
		{
			res[cnt1] = last;
			cnt1++;
			cnt1 += itsplus(&res[cnt1], chcnt);
			
			last = src[i];
			chcnt = 1;
		}
	}
	res[cnt1] = last;
	cnt1++;
	cnt1 += itsplus(&res[cnt1], chcnt);

	if (cnt1 > length) cout << src << endl;
	else cout << res << endl;
}

int itsplus(char* p, int num) {
	char renum[20] = { 0 };
	int cnt = 0;
	while (num>=10)
	{
		renum[cnt] = char(num % 10+0x30);
		num = num / 10;
		cnt++;
	}

	renum[cnt] = char(num + 0x30);

	for (int i = cnt; i>=0; i--)
	{
		*p = renum[i];
		p++;
	}

	return cnt + 1;
}
