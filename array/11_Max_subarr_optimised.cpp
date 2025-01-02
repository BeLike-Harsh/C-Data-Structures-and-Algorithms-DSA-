//Slithly optimised method
#include <iostream>

using namespace std;
void subArrSum(int *arr,int n){
    int maxSum=INT16_MIN;
    for (int start = 0; start < n; start++)
    {   int sum=0;
        for (int end = start; end < n; end++)
        {   
            sum+=arr[end];
             maxSum=max(maxSum,sum);
            cout<<sum<<",";
            
        }
        cout<<endl;
    }
    cout<<"The maximum subarray sum is = "<<maxSum;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    subArrSum(arr,n);

}