#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter the value of a: ";
    cin>>a;
    char op;
    cout<<"Enter the operator you want to use: ";
    cin>>op;
    float b;
    cout<<"Enter the value of b: ";
    cin>>b;
   switch (op){
     case '+':cout<<"Sum: "<<(a+b);
       break;
     case '-':cout<<"substract: "<<(a-b);
       break;
     case '*':cout<<"multiply: "<<(a*b);
       break;
     case '/':cout<<"division: "<<(a/b);
       break;    
     default:cout<<"The operator you enter is not valid";
   }    
    return 0;
}