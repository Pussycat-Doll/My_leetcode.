#include<iostream>
using namespace std;

bool Isprime(int x)//ÅĞ¶ÏÊÇ·ñÎªËØÊı
{
    for(int i = 2; i < x; ++i)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i = n/2; i >= 2; --i)
        {
            if(Isprime(i) && Isprime(n-i))
            {
                cout<<i<<endl;
                cout<<n-i<<endl;
                break;
            }
        }
    }
    
    return 0;
}
