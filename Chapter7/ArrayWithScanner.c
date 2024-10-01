# include<stdio.h>
int main(){
int marks[4];
for(int i =0;i<4;i++){
    printf("Enter marks got by %d student : \n",i+1);
    scanf("%d",&marks[i]);
}
for(int j=0; j<4;j++){
    printf("The marks you entered for student %d is %d\n",j+1,marks[j]);
}
return 0;
}
