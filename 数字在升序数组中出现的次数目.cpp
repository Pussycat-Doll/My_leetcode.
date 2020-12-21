class Solution {
public:
	//ʱ�临�Ӷȣ�O(N)
	//�ռ临�Ӷȣ�O(1)
    int GetNumberOfK(vector<int> data ,int k) 
    {
        int num = 0;
        for(auto e:data)
        {
            if(e == k)
                ++num;
        }
        return num;
    }
};


class Solution {
public:
	//ʱ�临�Ӷȣ�O(logN)
	//�ռ临�Ӷȣ�O(1)
    int GetNumberOfK(vector<int> data ,int k) 
    {
        int left = 0,lbound = 0,rbound = 0;
        int right = data.size();
        while(left < right)//Ѱ���½��
        {
            int mid = left + (right - left)/2;
            if(data[mid] < k)
                left = mid + 1;
            else
                right = mid;
        }
        lbound = left;
        left = 0;
        right = data.size();
        while(left < right)
        {
            int mid = left + (right - left)/2;
            if(data[mid] <= k)
                left = mid + 1;
            else
                right = mid;
        }
        rbound = right;
        return rbound - lbound;
    }
};
