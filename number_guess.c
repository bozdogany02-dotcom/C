#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int randomNumber, guessNumber, guessCount, score=100;
    srand(time(NULL));
    randomNumber = (rand()%100)+1;
    printf("I have a number from 1 to 100 for you to guess.\n");
    printf("Let's guess it!\n");

    while(guessNumber!=-1){
        printf("Enter a number:");
        scanf("%d",&guessNumber);
        if(guessNumber==-1)break;
        if(guessNumber<1 || guessNumber>100){
            printf("I said between 1 and 100!\n");
        continue;
        }
        guessCount++;
        if(guessNumber == randomNumber){
            printf("Great! You knew %dth guesses.",guessCount);
            break;
        }else{
            if(guessNumber > randomNumber){
                printf("Down.\n");
            }else{
                printf("Up.\n");
            }
            score-=10;
        }
    }
    if(score<0)score=0;
    printf("\nYour score is %d.",score);
    return 0;
}
