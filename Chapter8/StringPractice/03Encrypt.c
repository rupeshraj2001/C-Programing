#include<stdio.h>
void encrypt(char *c){
char *ptr = c;
while(*ptr != '\0'){
    *ptr = *ptr+1;
    ptr++;
}
}
int main(){
char c[]= "my name is rupesh raj";
encrypt(c);
printf("The Encrypted message is : %s",c);
return 0;
}
// nz!obnf!jt!svqfti!sbk
