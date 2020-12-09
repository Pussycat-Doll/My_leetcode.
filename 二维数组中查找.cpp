class Solution {
public:
    bool Find(int target, vector<vector<int> > array) 
    {
        for(int i = 0; i < array.size(); ++i)
        {
            for(int j = 0; j < array[0].size(); ++j)
            {
                if(array[i][j] == target)
                    return true;
            }
        }
        return false;
    }
};


class Solution {
public:
	/*ʱ�临�Ӷȣ�O(m+n) ������mΪ������nΪ�����������£���Ҫ����m+n�Ρ�
	  �ռ临�Ӷȣ�O(1)*/
    bool Find(int target, vector<vector<int> > array)
    {
        if(array.size() == 0 || array[0].size() == 0)
            return false;
        int r = 0, c = array[0].size() - 1;
        while(r < array.size() && c >= 0)
        {
            if(array[r][c] == target)
                return true;
            else if(array[r][c] > target)
                --c;
            else
                ++r;
        }
        return false;
    }
};
