#include<stdio.h>
void occurance(char st[], char c){
    char *ptr = st;
    int count = 0;
while(*ptr != '\0'){
    if(*ptr == c){
        count++;
    }
    ptr++;
}
if (count > 0){
        printf("Yes character %c is present in %s",c,st);
    }
    else{
      printf("NO character %c is not present in %s",c,st);
    }
}
int main(){
char st[]="rupesh raj";
occurance(st ,'r');
return 0;
}
