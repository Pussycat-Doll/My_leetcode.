//class Solution {
//public:
//    int majorityElement(vector<int>& nums)//Ħ��ͶƱ����Ͷ��++����Ͷ--������һ�����ϵ���Ͷ�ң�������Ӯ
//    {
//        int times = 0;
//        int val = nums[0];
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (times == 0)
//                val = nums[i];
//            if (val == nums[i])
//                ++times;
//            else
//            {
//                --times;
//            }
//        }
//        return val;
//    }
//};
//
//int majorityElement(vector<int>& nums)//����
//{
//    sort(nums.begin(), nums.end());
//    return nums[nums.size() / 2];
//}