// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,4,6,7,2,7};
//     int n=sizeof(arr)/sizeof(int);
//     int tar=7;
//    for (int i = 0; i < n; i++)
//    {
//      if (tar==arr[i])
//      {
//        cout<<i<<",";
//      }
     
//    }
   
//     return 0;
// }


#include<iostream>
using namespace std;
int linearS(int *arr,int n,int tar){
     for (int i = 0; i < n; i++)
   {
     if (tar==arr[i])
     {
       return i;
     }
     
   }
   return -1;
}
int main(){
    int arr[]={5,4,6,7,2,7};
    int n=sizeof(arr)/sizeof(int);
   
    cout<<linearS(arr,n,7);
    return 0;
}