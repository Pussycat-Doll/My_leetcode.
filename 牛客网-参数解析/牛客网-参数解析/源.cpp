/*
�������������������
xcopy /s c:\ d:\��
�����������£�
����1��������xcopy
����2���ַ���/s
����3���ַ���c:\
����4: �ַ���d:\
���дһ��������������ʵ�ֽ������и�����������������
��������
1.�����ָ���Ϊ�ո�
2.�����á������������Ĳ���������м��пո񣬲��ܽ���Ϊ���������
  ����������������xcopy /s ��C:\program files�� ��d:\��ʱ��������Ȼ��4����
  ��3������Ӧ�����ַ���C:\program files��������C:\program��ע���������ʱ��
  ��Ҫ������ȥ�������Ų�����Ƕ�������
3.����������
4.������������֤��������ֲ�����Ҫ�������
��������:
����һ���ַ����������пո�
�������:
��������������ֽ��Ĳ�����ÿ����������ռһ��

ʾ��1
����
xcopy /s c:\\ d:\\
���
4
xcopy
/s
c:\\
d:\\*/
#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int count = 0;
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (str[i] == '"')
		{
			do
			{
				++i;
			} while (str[i] != '"');
		}
		if (str[i] == ' ')
			count++;
	}
	count += 1;
	cout << count << endl;
	int flag = 1;
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (str[i] == '"')//����˫���� flag ���� ^1 ��� 0
			flag ^= 1;
		else if (str[i] != ' ' && str[i] != '"')//��ͨ�ַ�
			cout << str[i];
		else if (str[i] == ' ' && !flag)//˫����֮�ڵĿո�
			cout << ' ';
		else if (str[i] == ' ' && flag)//˫����֮��Ŀո�
			cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}