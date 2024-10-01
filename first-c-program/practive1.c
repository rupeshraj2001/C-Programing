#include<stdio.h>

int main(){
    int length , breath;
    printf("Enter the value of length of rectangle \n");
    scanf("%d",&length);

    printf("Enter the value of breath of rectangle \n");
    scanf("%d",&breath);

    printf("The area of rectangle is  %d \n" , length*breath);

    printf("The peremeter of rectangle is %d",2*(length+breath));
    return 0;
}
