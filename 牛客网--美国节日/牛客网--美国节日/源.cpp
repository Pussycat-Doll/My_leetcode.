/*���й��Ľ��ղ�ͬ�������Ľڼ���ͨ����ѡ��ĳ���µĵڼ������ڼ�������ʽ�����ÿһ��ķż����ڶ�����ͬ��
����������£�

1��1�գ�Ԫ��
1�µĵ���������һ������·�¡��������
2�µĵ���������һ����ͳ��
5�µ����һ������һ��������ʿ������
7��4�գ���������
9�µĵ�һ������һ���Ͷ���
11�µĵ��ĸ������ģ��ж���
12��25�գ�ʥ����
���ڸ���һ����ݣ������æ���ɵ�����յ����ڡ�
��������:
��������������ݣ�ÿ�����ݰ���һ��������year��2000��year��9999����
�������:
��Ӧÿһ�����ݣ��ԡ�YYYY-MM-DD����ʽ����������еĽ������ڣ�ÿ������ռһ�С�
ÿ������֮�����һ��������Ϊ�ָ���
*/
#include<iostream>
using namespace std;
int getweek(int year, int month, int week,int order)
{
	int wk = (1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
	if( wk == 0)
		wk = 7;
	int day;
	if (wk > week)
		day = 1 + (wk - week) + 1;
	else
		day = 1 + (week - wk);
	int time = 1;
	while (time < order)
	{
		day += 7;
		++time;
	}
	return day;
}
int main()
{
	int year;
	cin >> year;
	cout << year << "-01-01" << endl;
	printf("%d-01-%02d\n", year, getweek(year, 1, 1, 3));
	printf("%d-02-%02d\n", year, getweek(year, 2, 1, 3));
	printf("%d-05-%02d\n", year, getweek(year, 5, 1, 3));
	cout << year << "-07-04" << endl;
	printf("%d-09-%02d\n", year, getweek(year, 9, 4, 1));
	printf("%d-11-%02d\n", year, getweek(year, 11, 4, 3));
	cout << year << "-12-25" << endl<<endl;
	return 0;
}