#include <stdio.h>
int main(){
    int number;
    int count=0;
    int result=0;
    int mul=1;
    int cnt;
    int rem;

    printf("Enter Number:\n");
    scanf("%d", &number);

    int q = number;
    while(q!=0){
        q=q/10;
        count++;
    }
    cnt = count;
    q = number;

    while(q!=0){
        rem = q%10;
        while(cnt > 0){
            mul = mul*rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }
    if(result == number)
        printf("Pass.\n", number);
    else
        printf("Not Pass.\n", number);
}
