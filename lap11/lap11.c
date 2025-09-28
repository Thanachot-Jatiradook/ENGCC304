#include <stdio.h>

int isArmstrong(int number) {
    int q = number;
    int count = 0;
    int result = 0;
    int mul = 1;
    int rem;
    int cnt;

    while (q != 0) {
        q = q / 10;
        count++;
    }

    cnt = count;
    q = number;

    while (q != 0) {
        rem = q % 10;
        while (cnt > 0) {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q / 10;
        mul = 1;
    }

    return result == number;
}

int main() {
    int number;

    printf("Enter Number:\n");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
