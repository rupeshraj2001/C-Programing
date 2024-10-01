#include<stdio.h>
void decrypt(char *c){
char *ptr = c;
while(*ptr != '\0'){
    *ptr = *ptr-1;
    ptr++;
}
}
int main(){
char c[]= "nz!obnf!jt!svqfti!sbk";
decrypt(c);
printf("The Decrypted message is : %s",c);
return 0;
}
// my name is rupesh raj
