#include<iostream>
using namespace std;

int main() {
	char last='.';
	char c;
	int bs = 0, gs = 0;
	while (cin>>c)
	{
		switch (c)
		{
		case 'b':bs++; last = c; break;
		case 'o':bs += (last == 'b' ? 0 : 1); last = c; break;
		case 'y':bs += (last == 'o' ? 0 : 1); last = c; break;
		case 'g':gs++; last = c; break;
		case 'i':gs += (last == 'g' ? 0 : 1); last = c; break;
		case 'r':gs += (last == 'i' ? 0 : 1); last = c; break;
		case 'l':gs += (last == 'r' ? 0 : 1); last = c; break;
		default:last = c; break;
		}
	}
	cout << bs << ' ' << gs << endl;
}