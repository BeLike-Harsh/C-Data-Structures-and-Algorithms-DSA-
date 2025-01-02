#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the value of size: ";
    cin>>len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
       cin>>arr[i];
    }
    
   
    for (int i = 0; i < len; i++)
    {
       cout<<arr[i]<<",";
    }
    return 0;
}