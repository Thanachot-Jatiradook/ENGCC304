#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;

    srand(time(NULL));

    do {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        if (scanf("%d", &choice) != 1) {
            printf("Please enter only 1 or -1.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF); // clear buffer
            continue;
        }

        if (choice == 1) {
            int answer = rand() % 100 + 1;
            int guess;
            int score = 100;
            int min = 1, max = 100;

            printf("\n(Score=100)\n");

            while (1) {
                printf("\nGuess the winning number (%d-%d) :\n", min, max);
                if (scanf("%d", &guess) != 1) {
                    printf("Please enter a number between %d and %d.\n", min, max);
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                    continue;
                }

                if (guess < min || guess > max) {
                    printf("Your guess is out of range! Try between %d and %d.\n", min, max);
                    continue;
                }

                if (guess == answer) {
                    printf("\nThat is correct! The winning number is %d.\n", answer);
                    printf("\nScore this game: %d\n", score);
                    break;
                } else {
                    score -= 10;

                    if (score <= 0) {
                        printf("\nOut of score! The correct number was %d.\n", answer);
                        break;
                    }

                    if (guess < answer) {
                        printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                        if (guess + 1 > min)
                            min = guess + 1;
                    } else {
                        printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                        if (guess - 1 < max)
                            max = guess - 1;
                    }
                }
            }
        } else if (choice != -1) {
            printf("Please enter only 1 or -1.\n");
        }

    } while (choice != -1);

    printf("\nSee you again.\n");
    return 0;
}
