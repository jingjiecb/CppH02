//��Ŀ��
//����һ������ n + 1 ������������ nums�������ֶ��� 1 �� n ֮�䣨���� 1 �� n������֪*����*����һ
//���ظ��������� ����Ҫԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ��
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

//���뷽��������ֵΪ��������鳤�ȡ������ʽΪ1 2 3
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
//����������� 1 2 3����ʽ�����������飬���ȡ�
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