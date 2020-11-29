#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int num1 = 0;
    int num2 = 1;
    int pre,cur = 0;
    while(1)
    {
		if(cur >= N && pre <= N)
        {
		    cout<<min(N-pre,cur-N)<<endl;
		    break;
		}
        pre = cur;
        cur = num1 + num2;
        num1 = num2;
        num2 = cur;
        
    }
    return 0;
}
