#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int size = 7;
	//cin >> size;
	int num, count = 0;
	vector<int> ls = { 1 ,2, 3, 2, 1, 999999999, 1000000000 };
	/*while (size--)
	{
		cin >> num;
		ls.push_back(num);
	}*/
	ls.push_back(0);//���õش������ֻʣ��һ��Ԫ�ص����
	int i = 0;
	while(i < ls.size())
	{
		if (i < ls.size() - 1 && ls[i] == ls[i + 1])
		{
			++i;
		}
		else if (i < ls.size() - 1 && ls[i] <= ls[i + 1])//�ǵ���
		{
			while (i < ls.size() - 1 && ls[i] <= ls[i + 1])
				++i;
			++count;
			++i;
		}
		else if (i < ls.size() - 1 && ls[i] >= ls[i + 1])//�ǵݼ�
		{
			while (i < ls.size() - 1 && ls[i] >= ls[i + 1])
				++i;
			++count;
			++i;
		}
		else
			++i;
	}
	cout << count << endl;
	system("pause");
	return 0;
}

