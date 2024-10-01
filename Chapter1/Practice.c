#include<stdio.h>
int main(){
    int l , b;
    printf("Enter Length of rectangle\n");
    scanf("%d",&l);
    printf("Enter Breath of rectangle\n");
    scanf("%d",&b);
    printf("The area of your rectangle is %d \n",l*b);

    printf("And the perimeter of your rectangle is %d",2*(l+b));
return 0;
}
