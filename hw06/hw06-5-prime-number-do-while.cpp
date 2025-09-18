#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int num = n;
    if (n >= 2) {
        do {
            int isPrime = 1; //เช็คว่าเป็น prime number

            int i = 2;
            do {
                if (i * i > num) break;
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
                i++;
            } while (1);

            if (isPrime) {
                printf("%d ", num);
            }

            num--;
        } while (num >= 2);
    }

    printf("\n");
}
