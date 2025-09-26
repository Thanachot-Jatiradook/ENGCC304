#include <stdio.h>
void swapNumbers(int *ptr1, int *ptr2){
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    printf("After swap (num1 & num2) : %d,%d\n", *ptr1, *ptr2);
};

int main(){
    int num1 = 0;
    int *pPtr1 = &num1;
    int num2 = 0;
    int *pPtr2 = &num2;

    printf("Enter num1 :");
    scanf("%d", &num1);
    printf("Enter num2 :");
    scanf("%d" , &num2);

    printf("Before swap (num1 & num2) : %d,%d\n", *pPtr1, *pPtr2);
    swapNumbers(pPtr1, pPtr2);

}