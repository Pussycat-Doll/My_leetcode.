#include<iostream>
#include<string>
using namespace std;
//A~Z ��Ӧ��ASCII����Ϊ��65-90
//a~z��Ӧ��ASCII����Ϊ��97-122
string toLowerCase(string str)
{
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return str;
}
int main()
{

	return 0;
}