#include<stdio.h>
int main(){
    float Si,p,r,t;
    printf("Enter the value of p,r,t: ");
    scanf("%f%f%f",&p,&r,&t);
    Si=(p*r*t)/100;
    printf("The value Simple Interest is: %f",Si);
    return 0;

}