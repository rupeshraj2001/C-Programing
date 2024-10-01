#include<stdio.h>
int main(){
//char ptr[] = "Rupesh Raj";
//ptr ="Shubham Kumar";          //not work

char *ptr = "Rupesh Raj";
ptr = "Shubham Kumar";
printf("Your name is %s",ptr);
return 0;
}
