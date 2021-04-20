/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        stack<int> st;
        ListNode* cur = A;
        while(cur != nullptr)
        {
            st.push(cur->val);
            cur = cur->next;
        }
        cur = A;
        while(!st.empty())
        {
            if(st.top() == cur->val)
            {
                st.pop();
                cur = cur->next;
            }
            else
                return false;
        }
        return true;
    }
};
