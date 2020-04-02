#include<iostream>
using namespace std;

int main() {
	char box[9][9];
	char c;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			do
			{
				cin >> c;
			} while (c == '[' || c == ']' || c == '"' || c == ',' || c=='\n');
			box[i][j] = c;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++) 
		{
			if (box[i][j]=='.') continue;
			if (box[i][j] > 0x39 || box[i][j] < 0x30) {
				cout << "false" << endl;
				return 0;
			}
			for (int k = j+1; k < 9; k++)
			{
				if (box[i][j] == box[i][k]) {
					cout << "false" << endl;
					return 0;
				}
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (box[j][i] == '.') continue;
			if (box[j][i] > 0x39 || box[j][i] < 0x30) {
				cout << "false" << endl;
				return 0;
			}
			for (int k = j+1; k < 9; k++)
			{
				if (box[j][i] == box[k][i]) {
					cout << "false" << endl;
					return 0;
				}
			}
		}
	}

	char test[9];
	
	for (int i = 0; i < 9; i++)
	{
		int bex = 3 * (i / 3);
		int bey = 3 * (i % 3);
		for (int j = 0; j < 9; j++)
		{
			test[j] = box[bex + (j / 3)][bey + (j % 3)];
		}

		for (int j = 0; j < 9; j++)
		{
			if (test[j] == '.') continue;
			for (int k = j+1; k < 9; k++)
			{
				if (test[j] == test[k]) {
					cout << "false" << endl;
					return 0;
				}
			}
		}
	}

	cout << "true" << endl;
}
