class Solution {
public:
    int FirstNotRepeatingChar(string str) 
    {
//         unordered_map<char, int> mp;
//         for(auto e:str)
//             mp[e]++;
//         for(int i = 0; i < str.size(); ++i)
//         {
//             if(mp[str[i]] == 1)
//                 return i;
//         }
//         return -1;
        int count[128] = {0};
        for(const auto e:str)
            count[e]++;
        for(int i = 0; i < str.size(); ++i)
        {
            if(count[str[i]] == 1)
                return i;
        }
        return -1;
    }
};
