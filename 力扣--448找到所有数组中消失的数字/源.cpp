#include<iostream>
#include<vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        int j = abs(nums[i]) - 1;// ���nums[i]���ֹ�����nums[i] - 1ҲӦ�ó��ֹ����Դ�Ϊ�±�
        if (nums[j] > 0)//������ڹ����ͳ��Ը�һ����֤�� i+1 ���ڹ�
            nums[j] *= -1;
    }
    vector<int> ret;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0)
            ret.push_back(i + 1);
    }
    return ret;
}