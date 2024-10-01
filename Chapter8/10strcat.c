#include<stdio.h>
#include<string.h>
int main(){
char st1[45]= "Hello ";
char *st2 = "Rupesh";
strcat(st1,st2);
printf("Now st1 become %s",st1);
return 0;
}
