#include<bits/stdc++.h>
using namespace std;
// Brute Force method
// int main(){
//     int arr [4] [4]={{10,20,30,40},
//                      {15,25,35,45},
//                      {27,29,37,48},
//                      {32,33,39,50}};
//         int n=4,m=4,tar=33;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (arr[i][j]==tar)
//                 {
//                     cout<<"("<<i<<","<<j<<")";
//                 }
                
//             }
//         }
//     return 0;
// }

void searchS(int arr[][4],int n,int m,int tar){
     int r=0,c=m-1;
     while (r<n && c>=0){
        int start=arr[r][c];
        if (start==tar){
            cout<<"("<<r<<","<<c<<")";
            return;
        }
        else if(start>tar){
            c--;
        }
        else {
            r++;
        }
     }
      cout<<"Element not found";
}

int main(){
    int arr [4] [4]={{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
        int n=4,m=4,tar=33;
        
        searchS(arr,n,m,tar);
        
        
    return 0;
}

