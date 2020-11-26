#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int M;
    int N;
    cin>>M>>N;
    string s = "",table = "0123456789ABCDEF";
    
    while(M)
    {
        if(M<0)
        {
            M = -M;
            cout<<"-";
        }
        s = table[M%N]+s;
        M/=N;
    }
    cout<<s<<endl;
    return 0;
}
