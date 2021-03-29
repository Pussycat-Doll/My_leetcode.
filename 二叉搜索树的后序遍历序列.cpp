class Solution {
public:
    bool _verifyPostorder(vector<int>& postorder,int left,int right)
    {
        if(left >= right)
            return true;
        int mid = left;
        int root = postorder[right];
        while(postorder[mid] < root)//找到第一个大于根的
            ++mid;
        int temp = mid;
        //因为postorder[mid]前面的值都是比根节点root小的，
        //我们还需要确定postorder[mid]后面的值都要比根节点root大，
        //如果后面有比根节点小的直接返回false
        while(temp < right)
        {
            if(postorder[temp] < root)
                return false;
            ++temp;
        }
        //递归检验左子树和右子树
        return _verifyPostorder(postorder,left,mid-1) && _verifyPostorder(postorder,mid,right-1);

    }
    bool verifyPostorder(vector<int>& postorder) {
        return _verifyPostorder(postorder,0,postorder.size()-1);
    }
};
