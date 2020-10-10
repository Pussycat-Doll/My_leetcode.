#include<iostream>
#include<map>
#include<set>
using namespace std;
/*����һ������� (ransom) �ַ�����һ����־(magazine)�ַ������жϵ�һ���ַ���ransom�ܲ����ɵڶ����ַ���magazines������ַ����ɡ�������Թ��ɣ����� true �����򷵻� false��

(��Ŀ˵����Ϊ�˲���¶������ּ���Ҫ����־������������Ҫ����ĸ����ɵ����������˼��)

ע�⣺

����Լ��������ַ�����ֻ����Сд��ĸ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/ransom-note
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/

bool canConstruct(string ransomNote, string magazine)
{
	if (ransomNote.size() > magazine.size())
		return false;
	map<char, int> times;
	for (size_t i = 0; i < magazine.size(); ++i)
	{
		times[magazine[i]]++;
	}
	for (size_t i = 0; i < ransomNote.size(); ++i)
	{
		times[ransomNote[i]]--;
		if (times[ransomNote[i]] < 0)
			return false;
	}
	return true;
}
int main()
{

	return 0;
}
