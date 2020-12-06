#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> arr;
	while (N--)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	int Min = arr[0];
	int Max = arr[0];
	int flag = 0;//标记是否有多个深度的权值相同
	int sum = 0;
	arr.erase(arr.begin());
	int i = 0;
	int j = 1;
	int high = 0;
	while (!arr.empty())
	{
		sum += arr[0];
		arr.erase(arr.begin());
		++i;
		if (i == pow(2, j))
		{
			i = 0;
			++j;
			if (sum > Max)
			{
				Max = sum;
				high = j - 1;
			}
			Min = min(sum, Min);
		}
	}
	cout << high << endl;
	return 0;
}

