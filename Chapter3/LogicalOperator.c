#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age <= 70 && age>=18){
        printf("Your age is %d so you can drive\n" ,age);
    }
    else{
       printf("Your age is %d so you can't drive\n" ,age);
    }

    return 0;
}
