#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows=4,col=3;
    int **mat=new int*[rows];
    int y=5;
    for (int i = 0; i < rows; i++){
        mat[i]=new int[col];
    }
    int x=1;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            mat[i][j]=x;
            x++;
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}