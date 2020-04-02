//题目：
//给定一个包含 n + 1 个整数的数组 nums，其数字都在 1 到 n 之间（包括 1 和 n），可知*至少*存在一
//个重复的整数。 你需要原地删除重复出现的元素，使得每个元素只出现一次
#include<iostream>
#include<string>
using namespace std;

int main() {
	int num=0;
	int ever[1000] = {0};
	while (cin >> num)
	{
		
		if (ever[num] == 0) {
			ever[num] = 1;
			cout << num;
			cout << ' ';
		}
	}
}

//int main() {
//	string st;
//	char c;
//	getline(cin,st);
//	c = getchar();
//	cout << st<<' '<<int(c);
//	getline(cin, st);
//	c = getchar();
//	cout << st << ' ' << int(c);
//	getline(cin, st);
//	c = getchar();
//	cout << st << ' ' << int(c);
//}

//int main() {
//	int num;
//	char c;
//	char str[10];
//	cout << cin.good() << cin.eof() << cin.fail() << cin.bad() << endl;
//	while (cin >> num) {
//		cout << "1:" << num << endl;
//		cout << cin.good() << endl;
//	}
//	c = getchar();
//	cout << int(c) << endl;
//	char c1 = getchar();
//	cout << int(c1) << endl;
//
//	cout << cin.good() <<cin.eof()<<cin.fail()<<cin.bad()<< endl;
//	cin.clear();
//	cout << cin.good() << cin.eof() << cin.fail() << cin.bad() << endl;
//
//	while (cin>>num)
//	{
//		cout << "2:" << num<<endl;
//	}
//	cout << cin.good() << cin.eof() << cin.fail() << cin.bad() << endl;
//}

//输入方法，返回值为输入的数组长度。输入格式为1 2 3
//int getin(int* des) {
//	int num;
//	int cnt=0;
//	while (cin.peek()!='\n')
//	{
//		cin >> num;
//		des[cnt++] = num;
//	}
//	return cnt;
//}
//
//输出方法，以 1 2 3的形式。参数：数组，长度。
//void putout(int* src, int len) {
//	return;
//	if (len == 0) return;
//	for (int i = 0; i < len-1; i++)
//	{
//		if (src[i] == 0) continue;
//		cout << src[i];
//		cout << ' ';
//	}
//	if (src[len - 1] != 0) cout << src[len - 1];
//	cout << endl;
//}