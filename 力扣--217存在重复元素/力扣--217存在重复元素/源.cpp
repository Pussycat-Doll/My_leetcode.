/*����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�

����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��*/
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*bool containsDuplicate(vector<int>& nums) 
{
	map<string,int> times;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] >= 0)
		{
			string s;
			s.append(1,nums[i] + '0');
			times[s]++;
		}
		else
		{
			int temp = -nums[i];
			string s;
			s += "-";
			s.append(1, nums[i] + '0');
			times[s]++;
		}
	}
	map<string,int> :: iterator it = times.begin();
	while (it != times.end())
	{
		if (it->second >= 2)
			return true;
		++it;
	}
	return false;
}*/

bool containsDuplicate(vector<int>& nums)
{
	if (nums.size() == 0)
		return false;
	sort(nums.begin(),nums.end());
	for (int i = 0; i < nums.size() - 1; ++i)
	{
		if (nums[i] == nums[i + 1])
			return true;
	}
	return false;
}
int main()
{
	vector<int> nums = { 0,1,2,3,4,-1,-1,-2,-3 };
	cout << containsDuplicate(nums) << endl;
	return 0;
}