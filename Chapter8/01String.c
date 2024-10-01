#include<stdio.h>
int main(){
char str[] = {'R','u','p','e','s','h',' ','R','a','j','\0'};
char *ptr = str;
while(*ptr != '\0'){
    printf("%c",*ptr);
    ptr++;
}
return 0;
}
