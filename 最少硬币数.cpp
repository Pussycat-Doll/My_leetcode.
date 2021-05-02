#include<iostream>
#include<vector>
using namespace std;
//10--->5*2
//1 1 2 3
//dp[10] = dp[10-5]+1
//dp[5] = dp[5-5]+1

int fun(vector<int> arr, int target)
{
	vector<int> dp(target+1,INT_MAX-1);
	dp[0] = 0;
	for (int i = 0; i <= target; ++i)
	{
		for (int j = 0; j < arr.size(); ++j)
		{
			if(i >= arr[j])
				dp[i] = min(dp[i - arr[j]] + 1, dp[i]);
		}
	}
	return dp[target];
}
int main()
{
	vector<int> arr = { 1,3,5 };
	cout << fun(arr, 10) << endl;
	return 0;
}