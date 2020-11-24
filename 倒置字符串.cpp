#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    string str1;
    getline(cin, str1);
    stack<string> st;
    string res;
    for (size_t i = 0; i < str1.size(); ++i)
    {
        if (str1[i] != ' ')
        {
            res += str1[i];
        }
        else
        {
            st.push(res);
            res = "";
        }
    }
    st.push(res);
    string str = st.top();
    st.pop();
    while (!st.empty())
    {
        str += " ";
        str += st.top();
        st.pop();
    }
    cout << str << endl;
    return 0;
}
