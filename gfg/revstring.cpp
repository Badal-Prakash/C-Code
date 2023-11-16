#include <iostream>
using namespace std;
string reverseWord(string str)
    {
        int i=0;
        int l=str.length();
        while(i<l)
        {
            swap(str[i],str[l-1]);
            i++;
            l--;
        }
        return str;
    }
int main()
{
    string s;
    s="badal";
    cout<<reverseWord(s);
return 0;
}
