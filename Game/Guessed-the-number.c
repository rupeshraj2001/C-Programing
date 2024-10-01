#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int number,guess , nguessed = 1;
    srand (time(0));
    number = rand()%100+1;
  //  printf("The Random number is %d \n",number);
  do{
        printf("Guess a number between 1 to 100 \n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("you gussed the number in %d attemps\n",nguessed);
        }
    nguessed++;
  }
  while(guess != number);
return 0;
}
