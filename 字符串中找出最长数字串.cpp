#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string temp;
    queue<string>  res;
    for(size_t i = 0; i < s.size(); ++i)
    {
        while(s[i] >= '0' && s[i] <= '9')
        {
            temp+=s[i];
            ++i;
        }
        if(!temp.empty())
        {
            res.push(temp);
            temp = "";
        }
    }
    string _max = res.front();
    while(!res.empty())
    {
        if(res.front().size() > _max.size())
        {
            _max = res.front();
        }
        res.pop();
    }
    cout<<_max;
    return 0;
}
