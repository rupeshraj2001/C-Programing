#include<stdio.h>
int main(){
int arr[] = {1,2,3,4,5,6,7,8};
int rev[8];
int j = 0;
for(int i = 7; i >= 0; i--) {

        rev[j] = arr[i];
        j++;
    }
for(int i = 0; i<8; i++){
    printf("The element of array in original order is %d\n",arr[i]);
}
printf("*****************************************************\n");
for(int i = 0; i<8; i++){
    printf("The element of array in reverse order is %d\n",rev[i]);
}
return 0;
}
