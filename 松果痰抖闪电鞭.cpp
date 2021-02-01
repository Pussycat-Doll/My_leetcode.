#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double a,b,i;
    long double c;
    cin>>a>>b>>i;
    if(i == 1)
    {
        c = a;
        cout<<setiosflags(ios::fixed)<<setprecision(8)<<c<<endl;
    }
    else if(i == 2)
    {
        c = b;
        cout<<setiosflags(ios::fixed)<<setprecision(8)<<c<<endl;
    }
    else
    {
    	int n = i -2;
    	while(n--)
    	{
    		c = (1+b)/a;
    		a = b;
    		b = c;
		}
		cout<<setiosflags(ios::fixed)<<setprecision(8)<<c<<endl;
	}
    return 0;
}
