#define _CRT_SECURE_NO_WARNINGS 1
/*�㷨ѵ�� ��С������  
��������
     ��дһ����lcm������������������С��������
��������
     һ��������ĿҪ������뷶����
����
3 5
�������
15
���ݹ�ģ��Լ��
����������ÿһ�����ķ�Χ��
������������С��65536��
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int gcd(int a, int b)//���Լ��
{
	int max = a;
	int min = b;
	int temp = 0;
	if (b > max)
	{
		max = b;
		min = a;
	}
	while (min != 0)//շת�����
	{
		temp = max % min;
		max = min;
		min = temp;
	}
	return max;
}
int lcm(int a, int b)
{
	return (a*b) / gcd(a, b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << lcm(a, b)<< endl;
	system("pause");
	return 0;
}