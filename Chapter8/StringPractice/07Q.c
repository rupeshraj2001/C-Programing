#include<stdio.h>
#include<string.h>
int main(){
char st1[30];
char st2[30];
char c;
int i =0;
printf("Enter the value of 1st string :\n");
scanf("%s",st1);
printf("Enter the value of 2nd string :\n");
scanf("%s",st2);
while(c != '\n'){
    fflush(stdin);
    scanf("%c",&c);
    st2[i] = c;
    i++;
}
st2[i-1] = '\0';
printf("The value of st1 is %s\n",st1);
printf("The value of st2 is %s\n",st2);
printf("The strcmp is %d",strcmp(st1,st2));
return 0;
}
