#include <stdio.h>
#include <stdlib.h>

int main (){
    int x;
    printf("Hello World!\n");
    scanf("%d", &x);
    fflush(stdin);
    printf("\nNúmero: %d", x);
    return 0;
}