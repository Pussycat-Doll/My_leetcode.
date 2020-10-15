#include<iostream>
using namespace std;

int Add(int num1, int num2)
{
    while (num2)
    {
        int temp = (unsigned)(num1 & num2) << 1;//Çó½øÎ»
        num1 = num1 ^ num2;
        num2 = temp;
    }
    return num1;
}

int main()
{
    cout << Add(1, 2) << endl;
    return 0;
}