/*����һ�鲻���ظ�Ԫ�ص��������� nums�����ظ��������п��ܵ��Ӽ����ݼ�����

˵�����⼯���ܰ����ظ����Ӽ���*/


#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> subsets(vector<int>& nums) 
{
	vector<vector<int>> res(1);
	for (int i = 0; i < nums.size(); ++i)
	{
		int sz = res.size();
		for (int j = 0; j < sz; ++j)
		{
			vector<int> tm = res[j];
			tm.push_back(nums[i]);
			res.push_back(tm);
		}
	}
	return res;
}

int main()
{

	return 0;
}