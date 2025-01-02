#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[]={6,8,5,9,7};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    printArr(arr,n);
    return 0;
}