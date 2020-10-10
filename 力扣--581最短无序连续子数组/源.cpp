//����һ���������飬����ҪѰ��һ�������������飬�������������������������
//��ô�������鶼���Ϊ��������
//
//���ҵ���������Ӧ����̵ģ���������ĳ��ȡ�
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums)
    {
        if (nums.size() == 0)
            return 0;

        int begin = -1;
        int end = -2;
        int maxval = nums[0];
        int minval = nums[nums.size() - 1];
        int j;
        for (int i = 0; i < nums.size(); ++i)
        {
            j = nums.size() - i - 1;
            maxval = max(maxval, nums[i]);
            minval = min(minval, nums[j]);

            if (nums[i] < maxval)
                end = i;
            if (nums[j] > minval)
                begin = j;
        }
        return end - begin + 1;
    }

};