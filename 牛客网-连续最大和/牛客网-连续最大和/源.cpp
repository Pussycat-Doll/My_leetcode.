#define _CRT_SECURE_NO_WARNINGS 1
/*���ӣ�https://www.nowcoder.com/questionTerminal/5a304c109a544aef9b583dce23f5f5db
��Դ��ţ����

һ�������� N ��Ԫ�أ�����������������͡� ���磺[-1,2,1]������������������Ϊ[2,1]�����Ϊ 3

��������:
����Ϊ���С� ��һ��һ������n(1 <= n <= 100000)����ʾһ����n��Ԫ�� �ڶ���Ϊn������
��ÿ��Ԫ��,ÿ����������32λint��Χ�ڡ��Կո�ָ���

�������:
���������������к�����ֵ��
ʾ��1
����
3 -1 2 1
���
3*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int max_sum(vector<int> ve)
{
	int Max = ve[0];
	int sum = ve[0];
	for (size_t i = 1; i < ve.size(); ++i)
	{
		sum = max(sum + ve[i], ve[i]);
		Max = max(sum, Max);
	}
	return Max;
}
int main()
{
	int length = 3;
	while (cin >> length)
	{
		int num;
		vector<int> ve;
		while (length--)
		{
			cin >> num;
			ve.push_back(num);
		}
		cout << max_sum(ve) << endl;
	}
	system("pause");
	return 0;
}