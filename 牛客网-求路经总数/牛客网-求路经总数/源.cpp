#define _CRT_SECURE_NO_WARNINGS 1
/*��Ŀ����
���дһ�����������������Ӻ�����������n x m�����̸��ӣ�nΪ����ĸ�������mΪ����ĸ�������
���Ÿ��Ա�Ե�ߴ����Ͻ��ߵ����½ǣ��ܹ��ж������߷���Ҫ�����߻�ͷ·������ֻ�����Һ������ߣ���������������ߡ�
��������:
��������������

�������:
���ؽ��

ʾ��1
����
2
2
���
6*/
#include<iostream>
using namespace std;
int road_num(int m, int n)
{
	if ((m > 1 && n == 1) || (m == 1 && n > 1))
		return m + n;
	else if (m > 1 && n > 1)
		return road_num(m - 1, n) + road_num(m, n - 1);
	else
		return 0;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << road_num(m, n) << endl;
	system("pause");
	return 0;
}