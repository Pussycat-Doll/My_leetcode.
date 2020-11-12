#include<iostream>
#include<list>
using namespace std;   

//时间复杂度O（m*n）
//空间复杂度O（n） 
int LastRemaining_Solution(int n, int m)
{
    if(n < 1 || m < 1)//特殊情况
        return -1;
    list<int> children;
    for(int i = 0; i < n; ++i)
    {
        children.push_back(i);//利用list模拟循环队列
    }
    list<int>::iterator cur = children.begin();
    while(children.size() > 1)
    {
        for(int i = 1; i < m; ++i)//为什么从1开始，cur指向的元素就已经算是第一个数了
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
