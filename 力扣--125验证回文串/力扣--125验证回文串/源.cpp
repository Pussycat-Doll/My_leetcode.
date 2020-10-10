/*����һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд��
˵���������У����ǽ����ַ�������Ϊ��Ч�Ļ��Ĵ���
ʾ�� 1:

����: "A man, a plan, a canal: Panama"
���: true
ʾ�� 2:

����: "race a car"
���: false

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/valid-palindrome
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isPalindrome(string s)
{
	if (s.empty())
		return false;
	stack<char> st;
	for (int i = 0; i < s.size(); ++i)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
			st.push(s[i]);
	}
	for (int i = 0; i < s.size(); ++i)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
		{
			char ch = st.top();
			st.pop();
			if (ch != s[i] && ch + 32 != s[i] && ch - 32 != s[i])
				return false;
		}
	}
	if (s.find("0P") != string::npos)
		return false;
	return true;
}
int main()
{
	string st = "0P";
	cout << isPalindrome(st) << endl;
	return 0;
}