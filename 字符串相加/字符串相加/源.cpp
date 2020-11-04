#include<iostream>
#include<string>
using namespace std;

string addStrings(string num1, string num2)
{
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int flag = 0;
    int tmp = 0;
    string s = "";
    while (i >= 0 || j >= 0 || flag != 0)//�����ַ�����û�б����꣬�����ַ������һλ��Ӻ��н�λ
    {
        int x = i >= 0 ? num1[i] - '0' : 0;
        int y = j >= 0 ? num2[j] - '0' : 0;
        tmp = x + y + flag;
        flag = tmp / 10;//���λ
        s += (tmp % 10 + '0');//���Ϸǽ�λ
        --i;
        --j;
    }
    reverse(s.begin(), s.end());//���ã���ת
    return s;
}

int main()
{
    string s1("0");
    string s2("0");

    cout << addStrings(s1, s2) << endl;;
	return 0;
}