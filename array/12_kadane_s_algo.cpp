//Slithly optimised method
#include <iostream>

using namespace std;
void subArrSum(int *arr,int n){
    int maxSum=INT16_MIN;
    int sum=0;
    for (int start = 0; start < n; start++)
    {   
            sum+=arr[start];
             maxSum=max(maxSum,sum);
             cout<<sum<<","<<endl;
             if (sum<0){
                sum=0;
             }
    }
    cout<<"The maximum subarray sum is = "<<maxSum;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    subArrSum(arr,n);

}