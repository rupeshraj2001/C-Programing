// Q -> write a program to print the table which user want take user input and print the table of that number.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number to print the table\n");
    scanf("%d",&n);
int mul[10];

for(int i=0;i<10; i++){
    mul[i] = n*(i+1);
}
printf("The table of %d is :- \n ",n);
for(int i=0;i<10; i++){
    printf("%d X %d = %d\n" ,n, i+1 , mul[i]);
}
return 0;
}
