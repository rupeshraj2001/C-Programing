#include<stdio.h>
int main(){
    int p , r ,t,si,a;
    printf("Enter Principle Amount\n");
    scanf("%d",&p);
    printf("Enter Ratr of intrest\n");
    scanf("%d",&r);
    printf("Enter total Timr\n");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("The Simple Intrest is %d \n",si);
    a=si+p;
    printf("And the total Amount has to pay is %d",a);
return 0;
}
