#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

/*bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    vector<int> str;
    while (x)
    {
        int temp = x % 10;
        str.push_back(temp);
        x /= 10;
    }
    int begin = 0;
    int end = str.size() - 1;
    while (begin <= end)
    {
        if (str[begin] == str[end])
        {
            begin++;
            --end;
        }
        else
            return false;
    }
    return true;
}*/

/*bool isPalindrome(int x)//���������
{
    if (x < 0)
        return false;
    int y = 0;
    int num = x;
    while (x)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }
    if (num == y)
        return true;
    else
        return false;
}*/
/*   // �����ֳ���Ϊ����ʱ�����ǿ���ͨ�� revertedNumber/10 ȥ��������λ�����֡�
        // ���磬������Ϊ 12321 ʱ���� while ѭ����ĩβ���ǿ��Եõ� x = 12��revertedNumber = 123��
        // ���ڴ�����λ�����ֲ�Ӱ����ģ����������Լ���ȣ����������ǿ��Լ򵥵ؽ���ȥ����
���֪����ת���ֵ�λ���Ѿ��ﵽԭʼ����λ����һ�룿
���ǽ�ԭʼ���ֳ��� 10��Ȼ�����ת������ֳ��� 10�����ԣ�
��ԭʼ����С�ڷ�ת�������ʱ������ζ�������Ѿ�������һ��λ�������֡�

*/
bool isPalindrome(int x)//�Ż�--Ϊ�˱��������������������ֻ��תһ��
{
    if (x < 0 || (x%10 == 0 && x != 0))
        return false;
    int y = 0;
  
    while (x > y)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }
    if (x == y || x == (y/10))
        return true;
    else
        return false;
}
int main()
{
    return 0;
}
