#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    int A,B,C;
    cin>>a>>b>>c>>d;
    A = (a+c)/2;
    B = (b+d)/2;
    C = (d-b)/2;
    if(A-B == a && B-C == b && A+B == c && B+C == d)
        cout<<A<<" "<<B<<" "<<C<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
