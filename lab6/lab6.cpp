#include <stdio.h>

int main() {
    int n;

    printf("Enter value:\n");
    if (scanf("%d", &n) != 1) {
        printf("Please Enter Number Only\n");
        return 1;
        
    }//end if 

    printf("Series: ");

    if (n % 2 == 1) {
        
        for (int i = 1; i <= n; i += 2) {
            printf("%d ", i);
        }
    }//end if  
        else {
        
        for (int i = n; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }//end else

    printf("\n");
    return 0;
}
