class Solution {
public:
    vector<int> multiply(const vector<int>& A) 
    {
        vector<int> B(A.size(),1);
        for(int i = 1; i < B.size(); ++i)//◊Û∞Î∂Œ
        {
            B[i] = B[i-1]*A[i-1];
        }
        int temp = 1;
        for(int j = B.size() - 2; j >=0; --j)//”“∞Î∂Œ
        {
            temp *= A[j+1];
            B[j] *= temp;
        }
        return B;
    }
}; 
