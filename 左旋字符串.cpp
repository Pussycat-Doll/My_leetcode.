class Solution {
public:
    string LeftRotateString(string str, int n) 
    {
        if(n > str.size())
            return str;
        return str.substr(n)+str.substr(0,n);
        //substr()�ĵڶ�������Ĭ��ȱʡ����npos�Ļ����ͽ�ȡ��__pos��ĩβ��ȫ���ַ���
    }
    //ʱ�临�Ӷ�ΪO(N)
    //�ռ临�Ӷ�ҲΪO(N)
    //�ռ�ȸ��Ӷ�ΪO(N)ȡ����substr�ĵײ�ʵ�ֶ��⹹����N����С�Ŀռ�(NΪstr�ĳ���)
};
