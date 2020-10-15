class Solution {
public:
    vector<int> multiply(const vector<int>& A) 
    {
        vector<int> B(A.size(),1);
        for(int i = 1; i < B.size(); ++i)//����
        {
            B[i] = B[i-1]*A[i-1];
        }
        int temp = 1;
        for(int j = B.size() - 2; j >=0; --j)//�Ұ��
        {
            temp *= A[j+1];
            B[j] *= temp;
        }
        return B;
    }
}; 
