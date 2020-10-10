class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.size() == 0)
            return 0;
        //1,2,3,4,5
        //4,5,1,2,3
        //3,4,5,1,2
        //3,4,2,2,2,
        int first = 0;
        int last = rotateArray.size() - 1;
        int mid;
        while(first < last)
        {
            mid = first + ((last - first) >> 1);
            if(rotateArray[first] < rotateArray[last])
                return rotateArray[first];
            else if(rotateArray[mid] > rotateArray[last])
                first = mid + 1;
            else if(rotateArray[mid] < rotateArray[last])
                last = mid;
            else
                --last;
        }
        return rotateArray[first];
    }
};
