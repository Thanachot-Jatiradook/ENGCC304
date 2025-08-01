#include <stdio.h>
int main(){
    int i = 0;
    int sum = 0;

    for(i=1;i<=10;i++){
        printf("%d",i);
        sum+=i;
    } 
    printf("sum=%d",sum);
}