#define _CRT_SECURE_NO_WARNINGS 1
/*���ӣ�https://www.nowcoder.com/questionTerminal/d8acfa0619814b2d98f12c071aef20d4
��Դ��ţ����

����һ���ַ����������һ���㷨���ж����Ƿ�Ϊһ���Ϸ������Ŵ���

����һ���ַ���A�����ĳ���n���뷵��һ��boolֵ�������Ƿ�Ϊһ���Ϸ������Ŵ���

����������
"(()())",6
���أ�true
����������
"()a()()",7
���أ�false*/
#include<iostream>
#include<string>
#include<stack>
#include<cstdlib>
using namespace std;
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		if (A.size() % 2 == 1)
			return false;
		if (A[0] == ')')
			return false;
		stack<char> st;
		for (size_t i = 0; i < A.size(); ++i)
		{
			if (A[i] != '(' && A[i] != ')')
				return false;
			else if (A[i] == '(')
				st.push(A[i]);
			else if (!st.empty() && A[i] == ')')
				st.pop();
			else
				return false;
		}
		if (st.empty())
			return true;
		else
			return false;
	}
};
int main()
{
	string st = "()(())";
	Parenthesis A;
	cout<<A.chkParenthesis(st, 6)<<endl;
	system("pause");
	return 0;
}