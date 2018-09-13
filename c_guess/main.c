#include <stdio.h>
#include <stdlib.h>
int random(int lower, int upper){
int num = 5;
num = (rand() % (upper - lower + 1)) + lower;

return num;
}
int main()
{
    int lower = 1;
    int upper = 10;
    srand(time(0));
    int secretNumber = random(lower, upper);
    printf("%d", secretNumber);
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
