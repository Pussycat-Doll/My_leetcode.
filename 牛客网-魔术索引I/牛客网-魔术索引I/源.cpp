#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>//��̬�滮
/*��Ŀ����
������A[0..n-1]�У�����ν��ħ����������������A[i]=i������һ���������飬Ԫ��ֵ������ͬ����дһ���������ж�������A���Ƿ����ħ����������˼��һ�ָ��Ӷ�����o(n)�ķ�����

����һ��int����A��int n���������С���뷵��һ��bool�������Ƿ����ħ��������

����������
[1,2,3,4,5]
���أ�false*/
class MagicIndex {
public:
	bool findMagicIndex(vector<int> A, int n) {
		if (n <= 0)
			return false;
		else if (n >= 1 && A[n - 1] == n - 1)
			return true;
		else
			return findMagicIndex(A, n - 1);
	}
};