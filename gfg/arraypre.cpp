#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i=0;
    while(i<=n){
    int temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=arr[i];
    i++;
    }
    

    // Printing the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
