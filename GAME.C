#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Number,guess,nguesses;
    srand(time(0));
    Number= rand()%100 + 1;
    do{
        printf("Guess the number between 1-100\n");
        scanf("%d",&guess);
        if(guess>Number){
        printf("Lower number please\n");
        }
        else if (guess<Number){
            printf("Higer number please\n");
         }
         else{
             printf("You are right and guessed number in %d attempts\n",nguesses);
         }
         nguesses++;
    }
    while(guess!=Number);
    
    return 0;
}