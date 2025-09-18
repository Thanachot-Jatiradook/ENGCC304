/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop )
    
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

int main(){

    int n = 0;

    printf("Enter number : \n");
    scanf("%d",&n);

     for (int num = n; num >= 2; num--) {// ให้ num เป็นตัวแปร n , num มีค่ามากกว่าหรือเท่ากับ 2 ไหม
        int isPrime = 1; //เช็คว่าเป็นจำนวนเฉพาะหรือไม่

        for (int i = 2; i * i <= num; i++) { //หารตั้งแต่ 2 จนไปถึงเลขอื่นๆ
            if (num % i == 0) { //ถ้าหารแล้วได้ 0 จะไม่ใช่จำนวนเฉพาะ
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");

}