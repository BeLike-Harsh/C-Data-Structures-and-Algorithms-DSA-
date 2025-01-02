#include<bits/stdc++.h>
using namespace std;
void diagS(int mat [][3],int n){
    int sum=0;
    //  for (int i = 0; i < n; i++)
    //  {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i==j)
    //         {
    //             sum+=mat[i][j];
    //         }
    //         else if(j==n-i-1){
    //              sum+=mat[i][j];
    //         }
            
    //     }
        
    //  }
    

    //Optimise code for Diagonol Sum
    for (int i = 0; i < n; i++)
    {
        sum+=mat[i][i];
        if (i!=n-i-1)
        {
           sum+=mat[i][n-i-1];
        }
        
        
    }
    
     cout<<sum;
    
    
}
int main(){
    int arr [4] [4]={{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    
     int arr2 [3] [3]={{1,2,3},
                       {5,6,7},
                     {13,14,15}};
    diagS(arr2,3);
    return 0;
}