#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int tries = 3;

    do {
        printf("Make a guess:");
        scanf("%d", &guess);
    } while(guess != secretNumber);


    printf("You win!");
    return 0;
}
