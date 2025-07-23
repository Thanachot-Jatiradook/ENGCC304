#include <stdio.h>
int main(){

    int n = 0 ;
    int i = 0 ;
    
    printf("Enter value:\n");
    scanf("%d", &n);

    printf("Series: ");
    
    if (n % 2 == 1 ){
        for (int i = 1; i <=n; i+=2){
            printf("%d ", i);
        }
    }
    else {
        for (int i = n; i >=0; i -= 2){
            printf("%d ", i);
        }
    }


    


}