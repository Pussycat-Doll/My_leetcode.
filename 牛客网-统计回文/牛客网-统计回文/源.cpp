#define _CRT_SECURE_NO_WARNINGS 1
/*���ӣ�https://www.nowcoder.com/questionTerminal/9d1559511b3849deaa71b576fa7009dc
��Դ��ţ����

�����Ĵ�����һ�������ͷ�����һ�����ַ��������硰level�����ߡ�noon���ȵȾ��ǻ��Ĵ��������ǳ�ϲ������ӵ�жԳ����Ļ��Ĵ������յ�ʱ�����õ���������ֱ����ַ���A���ַ���B���������ǳ�������û�а취���ַ���B�����ַ���Aʹ�������ַ�����һ�����Ĵ�������ܻ��������󣬰�����Ѱ���ж����ֲ���취����ʹ�´���һ�����Ĵ�������ַ���B�����λ�ò�ͬ�Ϳ���Ϊ��һ���İ취��
���磺
A = ��aba����B = ��b����������4�ְ�B����A�İ취��
* ��A�ĵ�һ����ĸ֮ǰ: "baba" ���ǻ���
* �ڵ�һ����ĸ��a��֮��: "abba" �ǻ���
* ����ĸ��b��֮��: "abba" �ǻ���
* �ڵڶ�����ĸ'a'֮�� "abab" ���ǻ���
�������������Ĵ�Ϊ2

��������:
ÿ���������ݹ����С�
��һ��Ϊ�ַ���A
�ڶ���Ϊ�ַ���B
�ַ������Ⱦ�С��100��ֻ����Сд��ĸ

�������:
���һ�����֣���ʾ���ַ���B�����ַ���A֮�󹹳�һ�����Ĵ��ķ�����
ʾ��1
����
aba
b
���
2*/
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
bool isstring(string s)//�ж��Ƿ�Ϊ����
{
	size_t begin = 0;
	size_t end = s.size() - 1;
	while (begin <= end)
	{
		if (s[begin] == s[end])
		{
			++begin;
			--end;
		}
		else
			return false;
	}
	return true;
}
int main()
{
	string str ;
	string st ;
	cin >> str >> st;
	char c = st[0];
	int num = 0;
	for (size_t i = 0; i<=str.size(); ++i)
	{
		string copy = str;
		if (st.size() == 1)
			copy.insert(i, 1, c);//�����ַ�
		else
			copy.insert(i,st);//�����ַ���
		if (isstring(copy))
			num++;
	}
	cout << num << endl;
	system("pause");
	return 0;
}