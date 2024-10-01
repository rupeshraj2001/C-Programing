#include<stdio.h>
int main(){
    int student = 3;
    int marks = 5;
    int table[3][5];

    // Input marks
    for(int i = 0; i < student; i++){
        for(int j = 0; j < marks; j++){
            printf("Enter the marks of student %d for subject %d: \n", i+1, j+1);
            scanf("%d", &table[i][j]);  // Removed comma and fixed scanf
        }
    }

    // Output marks
    for(int i = 0; i < student; i++){
        for(int j = 0; j < marks; j++){
            printf("The marks of student %d in subject %d is: %d\n", i+1, j+1, table[i][j]);
        }
        printf("\n*****************************************************\n");
    }

    return 0;
}
