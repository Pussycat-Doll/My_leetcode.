#define _CRT_SECURE_NO_WARNINGS 1
/*�ݹ�+쳲��������еı仯�档
��������n����ʱ��������������

ֱ������1����Ȼ������ʣ�µ�n-1��
ֱ������2����Ȼ��ֱ��������n-2��
...
ֱ������n����Ȼ���ûȻ����(0��)
f(n) = f(n-1) + f(n-2) + .. + f(0)
�Ƶ�
f(n-1) = f(n-2) + .. + f(0)
���
f(n) = 2 * f(n-1)

����Ҫע�����n=1��ʱ��ֱ��ֻ��1��������ֱ��f(1) = 1
*/
#include<iostream>
#include<cstdlib>
using namespace std;
int jumpFloorII(int number) {
	if (number == 1)
		return 1;
	else
		return 2*jumpFloorII(number - 1);
}
int main()
{
	int num;
	while (cin >> num)
	{
		cout << jumpFloorII(num) << endl;
	}
	system("pause");
	return 0;
}