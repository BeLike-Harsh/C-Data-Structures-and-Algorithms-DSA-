//Hollow Rectangle Pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        cout<<"*";
        for (int j = n-1; j>0  ; j--){
            if (i==1 || i==n)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
          cout<<"*"<<endl;
    }
  
    return 0;

}