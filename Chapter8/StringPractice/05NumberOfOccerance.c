#include<stdio.h>
int occurance(char st[], char c){
    char *ptr = st;
    int count = 0;
while(*ptr != '\0'){
    if (*ptr == c){
        count++;
    }
    ptr++;
}
return count;
}
int main(){
char st[]="rupesh raj";
int count = occurance(st ,'r');
printf("The occerance of 'r' in string is : %d",count);
return 0;
}
