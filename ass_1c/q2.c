#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("Enter the value of l and b: ");
    scanf("%d%d",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("The value area of rectangle is: %d\n",area);
    printf("The value perimeter of rectangle is: %d",perimeter);
    return 0;
}