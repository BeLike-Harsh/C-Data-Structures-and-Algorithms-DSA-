#include<iostream>
using namespace std;
int ArrB(int *arr,int n,int tar){
     int start=0;
     int end=n-1;
    while (start<=end)
    {    int mid=(start+end)/2;
         if (arr[mid]==tar)
        {
            return mid;
        }
        else if (arr[mid]>tar)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
       
    }
    return -1;
}
int main(){
    int arr[]={5,4,6,7,9,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<ArrB(arr,n,9);
    
    return 0;
    
}