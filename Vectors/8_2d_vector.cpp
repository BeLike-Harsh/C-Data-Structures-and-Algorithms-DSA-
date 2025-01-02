#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<vector<int>> matrix={{1,4,5},{6,3,7},{5,8,2}};//IN 2D vector we can assing any number of column to a perticular row
 for (int i = 0; i < matrix.size(); i++){
   for (int j = 0; j < matrix[i].size(); j++){
    cout<<matrix[i][j]<<" ";
   }
   cout<<endl;
 }
 
return 0;
}