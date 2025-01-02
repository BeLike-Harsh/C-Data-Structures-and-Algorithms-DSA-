#include<bits/stdc++.h>
using namespace std;
void func(int arr[][4],int n,int m){
//     cout<<"0th row"<<arr<<endl;
//     cout<<"1th row"<<arr+1<<endl;
//     cout<<"2th row"<<arr+2<<endl;

//     cout<<"0th row value"<<*arr<<endl;
//     cout<<"1th row value"<<*arr+1<<endl;
//     cout<<"2th row value"<<*arr+2<<endl;

    cout<<"0th row"<<*(*(arr+0)+0)<<endl;
    cout<<"1th row"<<*(*(arr+1)+1)<<endl;
    cout<<"2th row"<<*(*(arr+2)+2)<<endl;
}
void func2(int (*arr)[4],int n,int m){
    cout<<"0th row"<<arr<<endl;
    cout<<"1th row"<<arr+1<<endl;
    cout<<"2th row"<<arr+2<<endl;
}
int main(){
    int arr [4] [4]={{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
    // cout<<arr<<"="<<&arr[0][0]<<endl;
    // cout<<arr+1<<"="<<&arr[1][0]<<endl;
    // cout<<arr+1<<"!="<<&arr[0][1]<<endl;
    func(arr,4,4);
    return 0;
}