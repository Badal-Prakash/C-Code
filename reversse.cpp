#include <iostream>
using namespace std;
// bool pelidrome(char a[],int n)
// {
//     int s=0;
//     int e=n-1;
//     while(s<=e)
//     {
//         if(a[s]!=a[e])
//         {
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// int size(char a[])
// {
//     int count=0;
//      for(int i=0;a[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count;
// }
// void reverse(char a[],int n)
// {
//     int i=0;
//     int e=n-1;
//      while(i<e)
//      {
//         swap(a[i++],a[e--]);
//      }

// }
char tolower(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch;
    }
    else{
        char temp =ch-'A'+'a';
        return temp;
    }
}
int main()
{
//    char name[20];
//    cin>>name;
//    cout<<name<<endl;
//    int l=size(name);
//    cout<<l;
//    reverse(name,l);
//    cout<<name<<endl;
//    cout<<pelidrome(name,l)<<endl;
    cout<<tolower('A ');
return 0;
}
