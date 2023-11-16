#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int key = 5;
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    cout << linearsearch(arr, 5, 0);

    return 0;
}
