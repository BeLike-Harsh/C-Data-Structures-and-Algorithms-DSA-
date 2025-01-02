// #include<iostream>
// using namespace std;
// void Arr(int *apr,int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<*apr<<",";
//         apr+=1;
//     }
    
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     Arr(arr,n);

//     return 0;    
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int *p=arr;
//     int *pp=p+3;
//     cout<<*p<<endl;
//     cout<<*pp<<endl;
//     cout<<pp-p;

//     return 0;    
// }


#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int *p=arr;
    int *pp=p+3;
    cout<<*p<<endl;
    cout<<*pp<<endl;
    cout<<(p==arr);

    return 0;    
}