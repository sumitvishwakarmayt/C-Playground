#include<stdio.h>
#include<conio.h>

sub(int *x, int *y){ //recieving content of address a and address b into x and y through pointers.
    int sub = *x-*y;
    printf("The address is first recieved by the pointer variables. \n");
    printf("The subtraction is %d", sub);
}

void main(){
    int a,b;
    printf("Enter two numbers to subtract:");
    scanf("%d%d", &a, &b);

    sub(&a, &b);
    while (1){
        main(); //Calling main function inside main function to repeat same subtraction function infinitely :-P
    }
    getch();
}