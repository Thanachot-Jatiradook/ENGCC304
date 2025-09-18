/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ While )
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int num = n;
    while (num >= 2) {
        int isPrime = 1; //เช็คว่าเป็น prime หรือไม่

        int i = 2;
        while (i * i <= num) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }

        if (isPrime) {
            printf("%d ", num);
        }

        num--;
    }

    printf("\n");
}