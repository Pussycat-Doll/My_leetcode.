#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    vector<string> res;
    string temp = "";
    int flag = 0;//标记引号的出现
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] != ' ' && str[i] != '"')
        {
            temp += str[i];
        }
        else if (str[i] == ' ' && flag == 0)
        {
            res.push_back(temp);
            temp = "";
        }
        else if (str[i] == ' ' && flag == 1)
        {
            temp += ' ';
        }
        else if (str[i] == '"')
        {
            ++flag;
        }
        if (flag == 2)
        {
            res.push_back(temp);
            temp = "";
            flag = 0;
            ++i;
        }
    }
    if(!temp.empty())
        res.push_back(temp);
    cout << res.size() << endl;
    for (auto e : res)
    {
        cout << e << endl;
    }

    return 0;
}
