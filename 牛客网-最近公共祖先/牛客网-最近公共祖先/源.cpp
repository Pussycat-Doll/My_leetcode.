#define _CRT_SECURE_NO_WARNINGS 1
/*���ӣ�https://www.nowcoder.com/questionTerminal/70e00e490b454006976c1fdf47f155d9
��Դ��ţ����

��һ���������������������㰴�����һ��һ��ش����������α�ţ��������Ϊ1���������������a��b�������һ���㷨�����a��b�������������ȵı�š�

��������int a,b��Ϊ�������ı�š��뷵��a��b������������ȵı�š�ע�������㱾��Ҳ����Ϊ�������ȡ�

����������
2��3
���أ�1*/
#include<iostream>
using namespace std;

int getLCA(int a, int b) {
	if (a / 2 == b / 2)//a,b�Ľ��Ϊͬһ��
		return a / 2;
	else if (a > b + 1 || a + 1 > b)
		return getLCA(a / 2, b);
	else
		return getLCA(a, b / 2);
}
int main()
{
	cout << getLCA(9, 7) << endl;
	system("pause");
	return 0;
}