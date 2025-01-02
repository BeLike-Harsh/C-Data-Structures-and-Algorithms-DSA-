#include<iostream>
using namespace std;


void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
}


void insertionSort(int arr[],int n){
       for (int i = 1; i < n; i++){
         int curr=arr[i];
         int prev=i-1;
         //for Decending order change the inquality sign
        while (prev>=0 && arr[prev] > curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
      
    }
}


int main(){
    int arr[]={6,8,5,9,7};
    int n=sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
    printArr(arr,n);
    
    return 0;
}