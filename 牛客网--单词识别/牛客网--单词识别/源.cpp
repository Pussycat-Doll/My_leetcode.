/*����һ��Ӣ�ľ��ӣ��Ѿ����еĵ���(�����ִ�Сд)�����ִ������Ӷൽ�ٰѵ��ʺʹ�������Ļ���������Ҫ����ʶ��Ӣ�ľ�źͶ��ţ�����˵�����ɿո񡢾�źͶ��Ÿ�����
��������:
�����������У��ܼƲ�����1000���ַ���*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	map<string, int> mp;
	string temp;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == '.')
		{
			if (!temp.empty())
				mp[temp]++;
			temp.clear();
		}
		else
			temp += str[i];
	}
	auto it = mp.begin();
	while (it != mp.end())
	{
		cout << it->first << ":" << it->second << endl;
		++it;
	}
	return 0;
}