#include <stdio.h>

void swapNumbers(int **ptr1, int **ptr2);

int main(){
    int num1 = 0;
    int num2 = 0;

    int *pPtr1 = &num1;
    int *pPtr2 = &num2;

    printf("Enter num1 :");
    scanf("%d", &num1);
    printf("Enter num2 :");
    scanf("%d" , &num2);

    printf("Before swap (num1 & num2) : %d,%d\n", num1, num2);

    swapNumbers(&pPtr1, &pPtr2);

    printf("After swap (num1 & num2) : %d,%d\n", num1, num2);

    return 0;
}

void swapNumbers(int **ptr1, int **ptr2){
    **ptr1 = **ptr1 + **ptr2;
    **ptr2 = **ptr1 - **ptr2;
    **ptr1 = **ptr1 - **ptr2;
}
