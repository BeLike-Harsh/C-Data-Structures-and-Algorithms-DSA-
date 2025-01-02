// #include<iostream>
// using namespace std;
// void array(int leo[]){
//     leo[0]=234;
// }
// int main(){
//     int arr[]={5,4,6,7,2};
//     cout<<*arr<<endl;
//     cout<<*(arr+1)<<endl;
//     array(arr);
//     cout<<arr[0];
//     return 0;
// }



#include<iostream>
using namespace std;
void array(int leo[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<leo[i]<<",";
    }
    
}
int main(){
    int arr[]={5,4,6,7,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    array(arr,5);
    return 0;
}
