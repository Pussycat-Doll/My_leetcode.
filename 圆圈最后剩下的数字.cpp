#include<iostream>
#include<list>
using namespace std;   

//ʱ�临�Ӷ�O��m*n��
//�ռ临�Ӷ�O��n�� 
int LastRemaining_Solution(int n, int m)
{
    if(n < 1 || m < 1)//�������
        return -1;
    list<int> children;
    for(int i = 0; i < n; ++i)
    {
        children.push_back(i);//����listģ��ѭ������
    }
    list<int>::iterator cur = children.begin();
    while(children.size() > 1)
    {
        for(int i = 1; i < m; ++i)//Ϊʲô��1��ʼ��curָ���Ԫ�ؾ��Ѿ����ǵ�һ������
        {
            ++cur;
            if(cur == children.end())
                cur = children.begin();
        }
        list<int>::iterator next = ++cur;
        if(next == children.end())
            next = children.begin();
        --cur;
        children.erase(cur);
        cur = next;
    }
    return *cur;
}

int main()
{
	
	cout<<LastRemaining_Solution(5,3)<<endl;
	return 0;
}
