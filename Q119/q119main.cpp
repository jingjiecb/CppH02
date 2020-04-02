#include<iostream>
#include<math.h>
using namespace std;
#define MAX_N 100
#define STRL 12

//注意：結構体は必ず使用の前に説明する。
struct order {
	char name[STRL] = { 0 };
	int time;
	int amount;
	char city[STRL] = { 0 };
};

int main() {
	int read(order des[]);
	void out(order src);
	int isEqual(char st1[], char st2[]);

	order srcs[MAX_N];
	int length=read(srcs);
	int ok[MAX_N] = { 0 };
	
	for (int i = 0; i < length; i++)
	{
		if (srcs[i].amount > 1000) {
			ok[i] = 1;
		}
		for (int j = i+1; j < length; j++)
		{
			if (i == j) continue;
			if (abs(srcs[i].time - srcs[j].time) <= 60 && isEqual(srcs[i].name,srcs[j].name) && 1-isEqual(srcs[i].city, srcs[j].city)) {
				ok[i] = 1;
				ok[j] = 1;
			}
		}
	}

	int total = 0;
	for (int i = 0; i < length; i++)
	{
		total += ok[i];
	}

	cout << '[';
	int index = 0;
	for (int i = 0; i < total-1; i++)
	{
		while (ok[index++] == 0);
		out(srcs[index-1]);
		cout << ',';
	}
	if (total>0)
	{
		while (ok[index++] == 0);
		out(srcs[index-1]);
	}
	cout << ']' << endl;
}



//读一个订单的内容，消耗两边的双引号为止。将内容读入结构体。
void readOne(order* des) {
	char c;
	int cnt = 0;

	cin >> c;
	while (cin.peek()!=',')
	{
		cin >> des->name[cnt];
		cnt++;
	}
	cin >> c;
	cin >> des->time >> c;
	cin >> des->amount >> c;
	cnt = 0;
	while (cin.peek() != '\"')
	{
		cin >> des->city[cnt];
		cnt++;
	}
	cin >> c;
}

int read(order des[]) {
	void readOne(order* des);
	char c;
	int cnt = 0;

	cin >> c;
	if (cin.peek() == ']') return 0;
	while (c!=']')
	{
		readOne(&des[cnt++]);
		cin >> c;
	}
	return cnt;
}

void out(order src) {
	cout << '"' << src.name << ',' << src.time << ',' << src.amount << ',' << src.city << '"';
}

int isEqual(char st1[], char st2[]) {
	for (int i = 0; i < STRL; i++)
	{
		if (st1[i] != st2[i]) return 0;
	}
	return 1;
}