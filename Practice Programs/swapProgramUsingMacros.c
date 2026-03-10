#include <conio.h>
#include <stdio.h>
#define swap(a,b) {int temp=a; a=b; b=temp;}

main(){
    int x,y;
    printf("Enter two numbers to store in variable X and Y :");
    scanf("%d%d", &x, &y);
    printf("The initial value of X is %d.\nThe initial value of Y is %d. \n", x, y);
    swap(x,y);
    printf("The value of X after swap is %d.\nThe value of Y after swap is %d.", x, y);

    getch();
}