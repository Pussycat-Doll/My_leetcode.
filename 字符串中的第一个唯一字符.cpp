class Solution {
public:
//采用映射的方式  时间复杂度O(N)  空间复杂度O(N)
    int firstUniqChar(string s) 
    {
        int arr[26] ={0};
        for(auto e : s)
        {
            arr[e - 'a']++;
        }
        for(int i = 0; i < s.size(); ++i)
        {
            if(arr[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};
