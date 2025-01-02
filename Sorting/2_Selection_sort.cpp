#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
}
void selectionSort(int arr[],int n){
       for (int i = 0; i < n-1; i++){
         int midInd=i;
         //for Decending order change the inquality sign
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[midInd])
            {
                midInd=j;
                
            }
        }
        swap(arr[i],arr[midInd]);
    }
}
int main(){
    int arr[]={6,8,5,9,7};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    printArr(arr,n);
    
    return 0;
}