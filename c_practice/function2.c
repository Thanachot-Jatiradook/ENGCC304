#include <stdio.h>

int add(int a, int b){
    int result = a+b;
    return result;
};

int main(){

    int output = add(4,5);
    printf("Output:%d\n", output);

}