#define _CRT_SECURE_NO_WARNINGS 1
/*һ����������m��n��С�ĵ�ͼ�����Ͻǣ���㣬��ͼ�еı�ǡ�start"��λ�ã���
������ÿ�����»������ƶ���������Ҫ�����ͼ�����½ǡ����յ㣬��ͼ�еı�ǡ�Finish"��λ�ã���
�����ж����ֲ�ͬ��·��������ߵ��յ㣿*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int uniquePaths(int m, int n) {
		if (m == 0 || n == 0)
			return 1;
		vector<vector<int>> arr(m, vector<int>(n, 1));
		for (int i = 1; i < m; ++i)//�ӵڶ��п�ʼ
		{
			for (int j = 1; j < n; ++j)
			{
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
		return arr[m - 1][n - 1];
	}
};