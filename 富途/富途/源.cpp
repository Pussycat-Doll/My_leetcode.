#include<iostream>
#include<vector>
using namespace std;

int _QuitSort(vector<int>& arr, int left, int right)
{
    int key = arr[left];
    int keyindex = left;
    while (left < right)
    {
        while (left < right && arr[right] >= key)
            --right;
        while (left < right && arr[left] <= key)
            ++left;
        swap(arr[left], arr[right]);
    }
    swap(arr[keyindex], arr[left]);
    return left;
}
void QuickSort(vector<int>& res, int left, int right)
{
    if (left >= right)
        return;
    int mid = _QuitSort(res, left, right);
    QuickSort(res, left, mid - 1);
    QuickSort(res, mid + 1, right);
}
int maxDistance(vector<int>& arr) {
    QuickSort(arr, 0, arr.size() - 1);
    int Max = 0;
    for (int i = arr.size() - 1; i >= 1; --i)
    {
        if (arr[i] - arr[i - 1] > Max)
            Max = arr[i] - arr[i - 1];
    }
    return Max;
}

int main()
{
    vector<int> res = { 9, 3, 1, 10};
    cout << maxDistance(res) << endl;
    return 0;
}

class Solution {
public:
    /**
     *
     * @param root TreeNode类 the root
     * @param node int整型
     * @return int整型
     */
    int flag = 0;
    int res = 0;
    void Inorder(TreeNode* root, int node)
    {
        if (root == nullptr)
            return;
        Inorder(root->left, node);
        if (root->val == node && flag == 0)
        {
            flag = 1;
        }
        else if (flag == 1)
        {
            res = root->val;
            flag = -1;
        }
        Inorder(root->right, node);
    }
    int nextNode(TreeNode* root, int node)
    {
        if (root == nullptr)
            return 0;
        Inorder(root, node);
        return res;
    }
};