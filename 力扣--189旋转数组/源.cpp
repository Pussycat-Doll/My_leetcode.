#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//ԭʼ����:               1 2 3 4 5 6 7
//��ת�������ֺ�:         7 6 5 4 3 2 1
//��תǰ k �����ֺ� :     5 6 7 4 3 2 1
//��ת�� n - k �����ֺ� : 5 6 7 1 2 3 4 -- > ���

void rotate(vector<int>& nums, int k)
{
    if (nums.empty() || k % nums.size() == 0)
        return;
    k = k % nums.size();//��ֹԽ��
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse((nums.end() - nums.size() + k), nums.end());
}
int main()
{

	return 0;
}
