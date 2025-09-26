#include <stdio.h>
int main(){

    int A = 5, *X, **Y;
    X = &A;
    Y = &X;

    printf("%10s %10s %10s\n","A","X","Y");
    printf("%10d %10d %10d\n",A,*X,**Y);
    printf("%10d %10d %10d\n",&A,X,*Y);
    printf("%10s %10d %10d\n","-",&X,Y);
    printf("%10s %10s %10d\n","-","-",&Y);
    return 0;

}