#include<stdio.h>
void slice(char *st ,int m ,int n){
int i =0;
while((m+i)<n){
    st[i]= st[i+m];
    i++;
}
st[i]= '\0';
}
int main(){
char st[] = "Rupesh";
slice(st,0,3);
printf("The slice of string is %s",st);
return 0;
}


// slice the string to print first three character of the string.
