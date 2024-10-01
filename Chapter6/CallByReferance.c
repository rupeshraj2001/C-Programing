# include <stdio.h>
int main(){
    int a = 4 , b = 6;
    printf("The value of a and b before swap is %d and %d\n" , a, b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("By first methord\n");
    printf("The value of a and b after swap is %d and %d\n" , a, b);
    printf("By second methord\n");
    a = a^b;
    b = a^b;
    a = a^b;
    printf("The value of a and b after swap is %d and %d\n" , a, b);
    printf("By third methord\n");
    a = a-b;
    b = a+b;
    a = b-a;
    printf("The value of a and b after swap is %d and %d\n" , a, b);
return 0 ;
}
