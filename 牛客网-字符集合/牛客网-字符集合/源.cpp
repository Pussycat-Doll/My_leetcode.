#define _CRT_SECURE_NO_WARNINGS 1
/*����һ���ַ�����������ַ����������ַ�����
��������:
ÿ����������һ���ַ������ַ�����󳤶�Ϊ100����ֻ������ĸ��������Ϊ�մ������ִ�Сд��
�������:
ÿ������һ�У����ַ���ԭ�е��ַ�˳������ַ����ϣ����ظ����ֲ��������ĸ�������
ʾ��1
����
	abcqweracb
���
	abcqwer*/
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		int array[256] = { 0 };
		for (size_t i = 0; i < str.size(); ++i)
		{
			if (array[str[i]] == 0)
			{
				cout << str[i];
				array[str[i]] = 1;
			}	
		}
		cout << endl;
	}
	system("pause");
	return 0;
}