	/*14.�㷨ѵ�� ���ʽ����  
	��������
		 ����һ��ֻ��  ���Ӽ��Գ������ŵĺϷ����ʽ������ʽ��ֵ�����г���ʾ������
	�����ʽ
		 ����һ�У�����һ�����ʽ��
	�����ʽ
		 ���������ʽ��ֵ��
	��������
	1-2+3*(4-5)
	�������
	-4
	���ݹ�ģ��Լ��
	���ʽ���Ȳ�����100�����ʽ����Ϸ���������̶���int�ڽ��С�
	*/
#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
int atoi(string& str)//�ַ���ת��Ϊ����
{
	int flag = 1;
	int num = 0;
	int coe = 1;
	if (str[0] == '-')
	{
		flag = -1;
	}
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
		}
	}
	return flag*num;
}
int evalRPN(vector<string>& tokens)//��׺���ʽ��������
{
	stack<int> num;
	vector<string>::iterator it = tokens.begin();
	int result = 0;
	while (it != tokens.end())
	{
		if ((*it) != "+" && (*it) != "-" && (*it) != "*" && (*it) != "/")
		{
			int number = atoi(*it);
			num.push(number);
		}
		else
		{
			int num1 = num.top();
			num.pop();
			int num2 = num.top();
			num.pop();
			result = 0;
			switch ((*it)[0])
			{
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - num2;
				break;
			case '*':
				result = num1 * num2;
				break;
			case '/':
				result = num2 / num1;
				break;
			default:
				break;
			}
			num.push(result);
		}
		++it;
	}
	return num.top();
}
/*void func(vector<string> s)
{
	vector<string> vc;
	stack<char> st;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] != "+" || s[i] != "-" || s[i] != "*" || s[i] != "/" || s[i] != ")")
		{
			vc.push_back(s[i]);
		}
		else
		{
			if (st.empty())
				st.push(s[i][0]);
			else if ( )
		}
	}
}*/

int main()
{
	vector<string> st = { "4", "3", "-"};
	cout<<evalRPN(st);
	system("pause");
	return 0;
}
