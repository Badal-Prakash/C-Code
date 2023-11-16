// #include <iostream>
// using namespace std;
// int main()
// {
//     char str[100];
//     cin>>str;
//     int k=strlen(str);
//     int i=0;
//     int  e=k-1;
//     cout<<k;
//    while(i<e)
//    {
//     swap(str[i],str[e]);
//     i++;
//     e--;
//    }
//    cout<<str;
// return 0;
// }
#include <iostream>
using namespace std;
void rev(string& str,int i,int e)
{
    if(i>e){
        return;
    }
    swap(str[i],str[e]);
    i++;
    e--;
    rev(str,i,e);
}
int main()
{
   string str;
   str="badal";
   rev(str,0,str.length()-1);
   cout<<str; 
return 0;
}
