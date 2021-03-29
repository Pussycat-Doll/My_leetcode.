class Solution {
public:
    bool _verifyPostorder(vector<int>& postorder,int left,int right)
    {
        if(left >= right)
            return true;
        int mid = left;
        int root = postorder[right];
        while(postorder[mid] < root)//�ҵ���һ�����ڸ���
            ++mid;
        int temp = mid;
        //��Ϊpostorder[mid]ǰ���ֵ���Ǳȸ��ڵ�rootС�ģ�
        //���ǻ���Ҫȷ��postorder[mid]�����ֵ��Ҫ�ȸ��ڵ�root��
        //��������бȸ��ڵ�С��ֱ�ӷ���false
        while(temp < right)
        {
            if(postorder[temp] < root)
                return false;
            ++temp;
        }
        //�ݹ������������������
        return _verifyPostorder(postorder,left,mid-1) && _verifyPostorder(postorder,mid,right-1);

    }
    bool verifyPostorder(vector<int>& postorder) {
        return _verifyPostorder(postorder,0,postorder.size()-1);
    }
};
