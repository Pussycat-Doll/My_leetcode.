#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    size_t pos = 0;
    size_t rpos = 0;
    for (size_t i = 0; i < s.size(); ++i)
    {
        pos = s.rfind(' ',i);
        rpos = pos;
        if (pos != -1)
            i = pos;
        if (pos == -1)
            break;
    }
    cout << s.size() - rpos << endl;
    return 0;
}