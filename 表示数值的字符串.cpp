class Solution {
public:
    bool isNumber(string s) 
    {
        if(s.size() == 0)
            return false;
        int index = 0;
        IsBlank(s,index);//������ʼ�Ŀո�
        int flag = IsSymbol(s,index);
        if(s[index] == '.')
        {
            ++index;
            flag = IsInteger(s,index) || flag;
            //��||��ԭ��
            //С������û���������֡���.99
            //С����������û�����֡���888.
            //С����ǰ��ͺ��涼���������֡���3.14
        }
        if(s[index]=='e' || s[index]=='E')
        {
            ++index;
            flag = flag && IsSymbol(s,index);
            //��&&��ԭ��
            //e|E�����֣����ĵ�ǰ����ߺ��涼����������
            //flag����ǰ��������,IsSymbol(s,index)�������������
        }
        IsBlank(s,index);//������β�Ŀո�
        return flag && index == s.size();
    }
    bool IsSymbol(string s,int& index)�жϷ���
    {
        if(s[index] == '+' || s[index] == '-')
            ++index;
        return IsInteger(s, index);
    }
    bool IsInteger(string s, int& index)//�ж��Ƿ�������ִ�
    {
        int i = index;
        while(index < s.size() && s[index] >= '0' && s[index] <= '9')
            ++index;
        return index > i;//�������ִ�
    }
    void IsBlank(string s, int& index)//������ʼ�ͽ�β�Ŀո�
    {
        int i = index;
        while(index < s.size() && s[index] == ' ')
            ++index;
    }
};

