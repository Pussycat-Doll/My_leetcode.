#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool sort1(vector<string> s)
{
    for(size_t i = 0; i < s.size()-1; ++i)
    {
        if(s[i] > s[i+1])
            return false;
    }
    return true;
}
bool sort2(vector<string> s)
{
    for(size_t i = 0; i < s.size()-1; ++i)
    {
        if(s[i].size() > s[i+1].size())
            return false;
    }
    return true;
}
int main()
{
    int N;
    cin>>N;
    vector<string> arr;
    arr.resize(N);
    string tmp;
    for(size_t i = 0; i < N; ++i)
    {
        cin>>tmp;
        arr[i] = tmp;
    }
    
    if(sort1(arr) && !sort2(arr))
    {
        cout<<"lexicographically"<<endl;
    }
    else if(!sort1(arr) && sort2(arr))
    {
        cout<<"lengths"<<endl;
    }
    else if(sort1(arr) && sort2(arr))
    {
         cout<<"both"<<endl;
    }
    else
    {
         cout<<"none"<<endl;
    }
    return 0;
}
