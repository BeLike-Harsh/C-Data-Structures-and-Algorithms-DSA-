#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr [4] [4];
    int n=4,m=4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter the value of "<<"["<<i<<","<<j<<"] : ";
            cin>>arr[i] [j];
        }
        cout<<endl;
    }
    return 0;
}
