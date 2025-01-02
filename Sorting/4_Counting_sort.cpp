#include<iostream>
#include<climits>
using namespace std;


void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
}

void countingSort(int arr[],int n){
    int freq[1000] = {0};
     int minVal = INT32_MAX , maxVal=INT32_MIN;
       for (int i = 0; i < n; i++){
         minVal=min(minVal,arr[i]);
         maxVal=max(maxVal,arr[i]);
         freq[arr[i]]++;
}
       for (int i = minVal,j=0; i <= maxVal; i++)
       {
          while (freq[i] > 0)
          {
              arr[j++] = i;
              freq[i]--;
          }
          
       }
       printArr(arr,n);
    
}
int main(){
    int arr[]={6,8,5,9,7};
    int n=sizeof(arr)/sizeof(int);
    countingSort(arr,n);
    
    return 0;
}