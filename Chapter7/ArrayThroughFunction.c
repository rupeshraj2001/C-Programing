# include<stdio.h>
void printArray(int *ptr, int n){
    for(int i =0; i<n; i++){
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
    ptr[2] = 555; // this will change the array value present at index 3 to 555
}
void printArray2(char *ptr, int n){
    for(int i =0; i<n; i++){
        printf("The value of element %d is %c\n",i+1,ptr[i]);
    }
}
int main(){
    int arr[] = {3,6,2,8,6,9,5,7};
    printArray(arr , 8);
    printf("\n***********************************\n\n");

    // Print the updated array
    printf("Updated integer array:\n");
    for (int i = 0; i < 8; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    printf("\n***********************************\n\n");
    char arr2[] ={'a','f','r','h','d','t','b','c'};
    printArray2(arr2 ,8);
return 0;
}
