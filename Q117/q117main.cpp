//��Ŀ��
//������N x N�ľ���˳ʱ����תָ����������ת��Ϊ90��ı���
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
	//Ϊ�˷�ֹ����degreeΪ��������������ⲻ��Ҫ��
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

//һ��ע�⣡�������������ʱ����ظ����֪����ĳ��ȡ�
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