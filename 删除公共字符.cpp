#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int hashtable[256] = {0};
    for(auto e:str2)
    {
        hashtable[e]++;
    }
    string res;
    for(auto e:str1)
    {
        if(hashtable[e] == 0)
            res+=e;
    }
    cout<<res<<endl;
    return 0;
}
