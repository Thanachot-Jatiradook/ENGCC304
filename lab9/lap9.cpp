#include <stdio.h>

int main() {
    int N;
    printf("Enter N :\n");
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:");
    for (int i = 0; i < N; i++) {
        printf(" %d", i);
    }
    printf("\n");

    printf("Array:");
    for (int i = 0; i < N; i++) {
        int num = arr[i];
        int prime = 1;

        if (num <= 1) prime = 0;
        else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime) printf(" %d", num);
        else printf(" #");
    }
    printf("\n");

    return 0;
}
