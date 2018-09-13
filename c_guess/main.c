#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int tries = 3;

    do {
        printf("You have %d tries left.\n", tries);
        printf("Make a guess: ");
        scanf("%d", &guess);
        tries --;
    } while(guess != secretNumber && tries > 0);

    if (guess == secretNumber){
    printf("You win!");
    } else {
    printf("Out of tries, You lose!");}
    return 0;
}
