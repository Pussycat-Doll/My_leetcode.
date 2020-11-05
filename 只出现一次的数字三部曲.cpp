/*136. 只出现一次的数字
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。
找出那个只出现了一次的元素。
说明：\
你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？*/

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res = 0;
        for(auto e:nums)
        {
            res^=e;
        }
        return res;
    }
};
/*137. 只出现一次的数字 II
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现了三次。
找出那个只出现了一次的元素。
说明：
你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？*/
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int bitarr[32] = {0};
        for(auto e:nums)
        {
            for(int i = 0; i < 32; ++i)
            {
                if(e & (1<<i))
                    bitarr[i]++;//统计出每一位1的个数
            }
        }
        //32位每一位1的个数要么是3N,要么是3N+1
        int res = 0;
        for(int i = 0; i < 32; ++i)
        {
            if(bitarr[i] % 3 == 1)
                res |=(1 << i);
        }
        return res;
    }
};
/*260. 只出现一次的数字 III
给定一个整数数组 nums，其中恰好有两个元素只出现一次，其余所有元素均出现两次。 
找出只出现一次的那两个元素。
示例 :
输入: [1,2,1,3,2,5]
输出: [3,5]
注意：
结果输出的顺序并不重要，对于上面的例子， [5, 3] 也是正确答案。
你的算法应该具有线性时间复杂度。你能否仅使用常数空间复杂度来实现*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        int flag = 0;
        for(auto e:nums)
        {
            flag^=e;
        }
        int i = 0;
        for(; i < 32; ++i)
        {
            //找出出现的第一个为1的标志位，该位为1，说明有的该位为1.有的该位为0
            if(flag & (1<<i))
                break;
        }
        int num1 = 0;
        int num2 = 0;
        //根据标记的位置，将其分为两组，再分别异或
        for(auto e:nums)
        {
            if(e&(1<<i))
                num1^=e;
            else
                num2^=e;
        }
        vector<int> v;
        v.push_back(num1);
        v.push_back(num2);
        return v;
    }
};

