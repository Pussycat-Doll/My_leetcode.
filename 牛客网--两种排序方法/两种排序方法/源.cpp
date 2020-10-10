//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstring>
//using namespace std;
//bool is_lexicographically(vector<char *> str)
//{
//	size_t i = 0;
//	if (strcmp(str[0], str[1]) >= 0)
//	{
//		while (i < str.size() - 1 && strcmp(str[i], str[i + 1]) >= 0)
//			++i;
//		if (i == str.size() - 1)
//			return true;
//		else
//			return false;
//	}
//	else
//		return false;
//}
//bool is_length(vector<char *> str)
//{
//	size_t i = 0;
//	if (strlen(str[0]) <= strlen(str[1]))
//	{
//		while (i < str.size() - 1 && strlen(str[i]) <= strlen(str[i + 1]))
//			++i;
//		if (i == str.size() - 1)
//			return true;
//		else
//			return false;
//	}
//	else
//	{
//		while (i < str.size() - 1 && strlen(str[i]) > strlen(str[i + 1]))
//			++i;
//		if (i == str.size() - 1)
//			return true;
//		else
//			return false;
//	}
//}
//int main()
//{
//	int num;
//	vector<char *> str;
//	cin >> num;
//	while (num--)
//	{
//		char st[100];
//		cin >> st;
//		str.insert(str.end(), st);
//	}
//	if (is_length(str) && is_lexicographically(str))
//		cout << "both" << endl;
//	else if (is_lexicographically(str))
//		cout << "lexicographically" << endl;
//	else if (is_length(str))
//		cout << "lengths" << endl;
//	else
//		cout << "none" << endl;
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
/*���ӣ�https://www.nowcoder.com/questionTerminal/839f681bf36c486fbcc5fcb977ffe432
��Դ��ţ����

������n���ַ����ַ��������������ַ������ȶ��ǲ�ͬ�ġ��������ѧϰ���������ַ��������򷽷��� 1.�����ַ������ֵ����������磺
"car" < "carriage" < "cats" < "doggies < "koala"
2.�����ַ����ĳ����������磺
"car" < "cats" < "koala" < "doggies" < "carriage"
������֪���Լ�����Щ�ַ�������˳���Ƿ��������������򷽷�������Ҫæ�ų���Ҷ��������Ҫ������æ��֤��

��������:
�����һ��Ϊ�ַ�������n(n �� 100)
��������n��,ÿ��һ���ַ���,�ַ������Ⱦ�С��100������Сд��ĸ���


�������:
�����Щ�ַ����Ǹ����ֵ������ж����Ǹ��ݳ����������"lexicographically",

������ݳ������ж������ֵ����������"lengths",

������ַ�ʽ���������"both"���������"none"
ʾ��1
����
3
a
aa
bbb
���
both*/
#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;
bool is_lexicographically(vector<string> str)
{
	size_t i = 0;
	if ((str[0] <= str[1]))
	{
		while (i < str.size() - 1 && str[i] <= str[i + 1])
			++i;
		if (i == str.size() - 1)
			return true;
		else
			return false;
	}
	else
		return false;
}
bool is_length(vector<string> str)
{
	size_t i = 0;
	if (str[0].size() <= str[1].size())
	{
		while (i < str.size() - 1 && str[i].size() <= str[i+1].size())
			++i;
		if (i == str.size() - 1)
			return true;
		else
			return false;
	}
	else
	{

		return false;
	}
}
int main()
{
	int num;
	vector<string> str;
	cin >> num;
	while (num--)
	{
		string st;
		cin >> st;
		str.insert(str.end(), st);
	}
	if (is_length(str) && is_lexicographically(str))
		cout << "both" << endl;
	else if (is_lexicographically(str))
		cout << "lexicographically" << endl;
	else if (is_length(str))
		cout << "lengths" << endl;
	else
		cout << "none" << endl;
	system("pause");
	return 0;
}