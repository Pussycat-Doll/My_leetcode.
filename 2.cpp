#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string ch;
	cout << "请输入你想要转换的罗马数字：" << endl;
	while (cin >> ch)
	{
		int sum = 0;
		vector<int> num;
		num.resize(ch.size());
		for (int i = 0; i < ch.size(); ++i)
		{
			switch (ch[i])
			{
			case 'I':
				num[i] = 1;
				break;
			case 'V':
				num[i] = 5;
				break;
			case 'X':
				num[i] = 10;
				break;
			case 'L':
				num[i] = 50;
				break;
			case 'C':
				num[i] = 100;
				break;
			case 'D':
				num[i] = 500;
				break;
			case 'M':
				num[i] = 1000;
				break;
			default:
				break;
			}
		}
		for (int i = 0; i < ch.size() - 1; ++i)
		{
			if (num[i] == 1 && (num[i + 1] == 5 || num[i + 1] == 10))
				num[i] = -1;
			else if (num[i] == 10 && (num[i + 1] == 50 || num[i + 1] == 100))
				num[i] = -10;
			else if (num[i] == 100 && (num[i + 1] == 500 || num[i + 1] == 1000))
				num[i] = -100;
		}
		for (auto e : num)
		{
			sum += e;
		}
		cout << sum << endl;
	}
	return 0;
}
