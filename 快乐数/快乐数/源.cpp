#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
bool isHappy(int n)
{
	int num = n;
	int flag = 0;
	while (num)
	{
		flag += pow((long double)(num % 10), 2);
		num /= 10;
	}
	if (flag == 1)
		return true;
	if (flag == 4)
		return false;
	else
		return isHappy(flag);
}
int main()
{
	isHappy(3);
	system("pause");
	return 0;
}
