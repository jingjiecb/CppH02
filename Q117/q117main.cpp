//题目：
//将给定N x N的矩阵顺时针旋转指定度数，旋转角为90°的倍数
#include<iostream>
using namespace std;
#define maxL 20

int main() {
	void printM(int src[maxL][maxL],int);
	void s90(int src[maxL][maxL], int des[maxL][maxL], int length);
	void s180(int src[maxL][maxL], int des[maxL][maxL], int length);
	void s270(int src[maxL][maxL], int des[maxL][maxL], int length);
	void s0(int src[maxL][maxL], int des[maxL][maxL], int length);

	int mtx[maxL][maxL] = { 0 };
	int res[maxL][maxL] = { 0 };
	int num;
	int row = 0, clm = 0;
	char c;
	while (cin>>num)
	{
		mtx[row][clm] = num;
		clm++;
		c = cin.peek();
		if (c == '\n') {
			row++;
			clm = 0;
		}
	}
	int degree = (mtx[row][0]);
	//为了防止出现degree为负数的情况。本题不需要。
	//while (degree<0)
	//{
	//	degree += 360;
	//}
	degree %= 360;
	int length = row;

	switch (degree)
	{
	case 90:s90(mtx, res, length); break;
	case 180:s180(mtx, res, length); break;
	case 270:s270(mtx, res, length); break;
	default:s0(mtx, res, length); break;
	}

	printM(res,length);
}

//一定注意！传入数组参数的时候务必跟随告知数组的长度。
void printM(int src[maxL][maxL],int length) {
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << src[i][j] << ' ';
		}
		cout << endl;
	}
}

void s90(int src[maxL][maxL],int des[maxL][maxL],int length) {
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			des[j][length - 1 - i] = src[i][j];
		}
	}
}

void s270(int src[maxL][maxL], int des[maxL][maxL], int length) {
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			 des[i][j]= src[j][length - 1 - i];
		}
	}
}

void s180(int src[maxL][maxL], int des[maxL][maxL], int length) {
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			des[length - 1 - i][length - 1 - j] = src[i][j];
		}
	}
}

void s0(int src[maxL][maxL], int des[maxL][maxL], int length) {
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			des[i][j] = src[i][j];
		}
	}
}