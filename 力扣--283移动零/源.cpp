#include<iostream>
#include<vector>
using namespace std;
//��������ָ�룬һ����ָ�����ں��棬������0Ԫ�أ�һ����ָ������ǰ�棬�����ҷ���Ԫ��
//���������Ҷ��˾ͽ���λ�ã�ע�⣺��Ϊ�����Ŀ��Ҫ������0Ԫ��ȫ�����ƶ������棬��Ҫ�������еķ���Ԫ��
//����ԭ����˳�򲻱�
void moveZeroes(vector<int>& nums)
{
    int firstindex = 0;//��Ϊ����Ԫ�ص�ĩ��
    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[i] != 0)
        {
            //������Ԫ���Ƿ���β��
            if (i != firstindex)//���ڷ���Ԫ��ĩ��,�ŵ�����Ԫ��ĩ�ˣ�����ĩ��++
            {
                nums[firstindex++] = nums[i];
                nums[i] = 0;
            }
            else
            {
                firstindex++;
            }
        }
    }
}
int main()
{
    vector<int> nums = { 1,0 };
    moveZeroes(nums);
    return 0;
}