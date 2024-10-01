# include <stdio.h>
int sum (int a, int b);
int main(){
    int a = 34;
    int b = 36;
    printf("The value of a and b is %d and %d\n " , a , b);
    printf("The value of a + b is %d \n", sum(a,b));
    printf("The value of a and b is after function call %d and %d\n " , a , b);
    return 0;
}
int sum(int a , int b){
    return a+b;
}
