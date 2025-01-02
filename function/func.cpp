// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     int ans=1;
//     for (int i = 0; i < b; i++)
//     {
//         ans*=a;
//     }
//     return ans;
// }

// int main(){
//     int aw=power(2,2);
//     cout<<"answer is: "<<aw;
//     return 0;
// }

//shorter code goes here

#include<iostream>
using namespace std;
int power(){
    int a,b;
    cin>> a >>b;
    int ans=1;
    for (int i = 0; i < b; i++)
    {
        ans*=a;
    }
    return ans;
}
int main(){
    cout<<"answer is: "<<power();
    return 0;
}