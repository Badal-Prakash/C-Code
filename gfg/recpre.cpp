// #include <iostream>
// using namespace std;
// void print(int n)
// {
//     if(n==0)
//     {
//         return ;
//     }
//     print(n-1);
//     cout<<n<<endl;
//     print(n-1);
   
// }
// int main()
// {
//     print(3);
// return 0;
// }
// #include <iostream>
// using namespace std;
// void print(int n)
// {
//     if(n==0)
//     {
//         return ;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }
// int main()
// {
//     print(10);
// return 0;
// }
// #include <iostream>
// using namespace std;
// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     return n+sum(n-1);
// }
// int main()
// {
//     cout<<sum(1);
// return 0;
// }


//pelidrome recursive
// #include <iostream>
// using namespace std;
// bool peli(string &str,int start,int end)
// {
//     if(start>=end)
//     {
//         return true;
//     }
//     return (str[start]==str[end])&&peli(str,start+1,end-1);
// }
// int main()
// {
//     string s="abaa";
//    cout<< peli(s,0,s.length()-1);
// return 0;
// }
//sum of digits
// #include <iostream>
// using namespace std;
// int sumofdigits(int n)
// { 
//     int sum=0;
//     if(n==0)
//     {
//         return 0;
//     }
//     return sum+(n%10)+sumofdigits(n/10);
// }
// int main()
// {
//     cout<<sumofdigits(10);
// return 0;
// }
// #include <iostream>
// using namespace std;


// int maxCuts(int n, int a, int b, int c)
// {
// 	if(n == 0)
// 		return 0;
// 	if(n <= -1)
// 		return -1;

// 	int res = max(maxCuts(n-a, a, b, c), 
// 	          max(maxCuts(n-b, a, b, c), 
// 	          maxCuts(n-c, a, b, c)));

// 	if(res == -1)
// 		return -1;

// 	return res + 1; 
// }
// int main() {
	
// 	int n = 5, a = 2, b = 1, c = 5;
	
// 	cout<<maxCuts(n, a, b, c);
	
// 	return 0;
// }
// #include<iostream>
// #include<iterator>
// #include<vector>
// using namespace std;
// int main()
// {
//   vector<int>v={1,2,3,4};
//   for(auto i=v.begin();i<v.end();i++)
//     {
//       cout<<*i<<endl;
//     }  
//   return 0;
// }
// #include <iostream>
// using namespace std;
// class solution{
//     private:
//     void solve(vector<int> nums,vector<int>output,int index,vector<vector<int>> &ans)
//     {
//         if(index>=nums.size())
//         {
//             ans.push_back(output);
//             return;
//         }
//         solve(nums,output,index+1,ans);
//         int element=nums[index];
//         output.push_back(element);
//         solve(nums,output,index+1,ans);
//     }
//     public:
//     vector<vector<int>> subset(vector<int> &nums)
//     {
//         vector<vector<int>> ans;
//         vector<int> output;
//         int index=0;
//         solve(nums,output,index,ans);
//         return ans;
//     }
// };
// int main()
// {
//     solution str;
//     vector<int> v={1,2,3};
//     str.subset(v);
// return 0;
// }
//binary 
// #include <iostream>
// using namespace std;
// void bin(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     cout<<n%2;
//     bin(n/2);
// }
// int main()
// {
//     bin(25);
// return 0;
// }
// #include <iostream>
// using namespace std;
 
// int fun(unsigned int n)

// {

//     if (n == 0 || n == 1)

//         return n;



//     if (n%3 != 0)

//         return 0;



//     return fun(n/3);

// }

// int main()
// {
//     cout<<fun(27);
// return 0;
// }
// int rev(int n)
// {
//   int revnum=0;
//   int digit;
//   while(n>0)
//   {
//     digit=n%10;
//     revnum=revnum*10+digit;
//     n/=10;
//   }
//   return revnum;
// }
// int power(int x,int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     if(n==1)
//     {
//         return x;
//     }
//     return x*power(x,n-1);
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n=15;
//     int l=rev(n);
//     cout<<power(n,l);
// return 0;
// }
// #include <iostream>
// using namespace std;
// void toh(int n,char a,char b,char c)
// {
//     if(n==1)
//     {
//         return;
//     }
//     toh(n-1,a,c,b);
//     toh(n-1,b,a,c);
// }
// int main()
// {
//     toh(3,'a','b','c');
// return 0;
// }

// #include <iostream>
// using namespace std;
// void alternateswap(int arr[],int n)
// {
//     for(int i=0;i<n;i=i+2)
//     {if(i+1<n)
//     {
//  int temp=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;
//     }}
    

// }
// int main()
// {
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     alternateswap(arr,5);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// return 0;
// }
// #include <iostream>
// int dupli(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//        for(int j=i+1;j<n;j++)
//        {
//         if(arr[i]==arr[j])
//         {
//             return arr[j];
//         }
//        }
//     }
//     return -1;
// }
// using namespace std;
// int main()
// {
    
//     int arr[6]={1,2,3,4,5,4};
//     cout<<dupli(arr,6);
// return 0;
// }
// #include <iostream>
// using namespace std;
// void rvereseArray(int arr[], int start, int end) 
// { 
//     if (start >= end) 
//     return; 
      
//     int temp = arr[start];  
//     arr[start] = arr[end]; 
//     arr[end] = temp; 
      
//     // Recursive Function calling 
//     rvereseArray(arr, start + 1, end - 1);  
// }
// int main()
// {
//     int arr[6]={1,2,3,4,5,4};
//         for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     rvereseArray(arr,0,6);
//     for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }
