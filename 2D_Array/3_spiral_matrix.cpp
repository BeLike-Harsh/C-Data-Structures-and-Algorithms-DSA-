#include<bits/stdc++.h>
using namespace std;
void spiralM(int mat [][4],int n,int m){
     int sRow=0,sCol=0;
     int eRow=n-1,eCol=m-1;
     while (sRow<=eRow && sCol<=eCol){
        cout<<endl;
        //top
        for (int i= sCol; i <= eCol; i++){
        cout<<mat[sRow][i]<<" ";
    }
      cout<<endl;
       //right
    for (int j = sRow+1; j <= eRow; j++){
        cout<<mat[j][eCol]<<" ";
    }
      cout<<endl;
      //bottom
    for (int i = eCol-1; i >= sCol; i--)
    {
        if(sRow==eRow){
            break;
        }
        cout<<mat[eRow][i]<<" ";
    }
      cout<<endl;
       //left
    for (int j = eRow-1; j >= sRow+1; j--)
    {
        if (sCol==eCol)
        {
           break;
        }
        
        cout<<mat[j][sCol]<<" ";
    }
     sRow++; sCol++;
     eRow--; eCol--;

 }
    
    
    
}
int main(){
    int arr [4] [4]={{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    spiralM(arr,4,4);
    return 0;
}