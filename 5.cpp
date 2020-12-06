#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> arr;
	while (n--)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	set<int> st;
	for (auto e:arr)
	{
		st.insert(e);
	}
	if (k > st.size())
		cout << "NO RESULT" << endl;
	else
	{
		set<int>::iterator it = st.begin();
		while (--k)
		{
			++it;
		}
		cout << *it << endl;

	}
	return 0;
}
