/*����һ���ǿ����飬���ش������е������������������ڣ��򷵻���������������
Ҫ���㷨ʱ�临�Ӷȱ�����O(n)��
ʾ�� 1:

����: [3, 2, 1]

���: 1

����: ����������� 1.
ʾ�� 2:

����: [1, 2]

���: 2

����: ���������������, ���Է��������� 2 .
ʾ�� 3:

����: [2, 2, 3, 1]

���: 1

����: ע�⣬Ҫ�󷵻ص������������ָ��������Ψһ���ֵ�����
��������ֵΪ2���������Ƕ��ŵڶ���
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/third-maximum-number
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int thirdMax(vector<int>& nums)
{
	set<int> se(nums.begin(), nums.end());
	set<int> ::reverse_iterator it = se.rbegin();
	if (se.size() < 3)
		return *it;
	else
		return *(++(++it));

}
int main()
{

	return 0;
}