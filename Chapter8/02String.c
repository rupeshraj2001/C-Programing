#include<stdio.h>
int main(){
char str[] = "Rupesh Raj";
char *ptr = str;
while(*ptr != '\0'){
    printf("%c",*ptr);
    ptr++;
}
return 0;
}
