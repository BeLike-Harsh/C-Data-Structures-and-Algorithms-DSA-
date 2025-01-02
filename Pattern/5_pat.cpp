// Inverted and rotated pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = (n-i)+1; j > 0 ; j--){
           cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
          cout<<endl;
    }
  
    return 0;

}