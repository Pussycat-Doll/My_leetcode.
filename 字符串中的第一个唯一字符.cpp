class Solution {
public:
//����ӳ��ķ�ʽ  ʱ�临�Ӷ�O(N)  �ռ临�Ӷ�O(N)
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
