#include<stdio.h>
#include<conio.h>

int add(int x, int y){
    int sum;
    sum = x+y;
    return sum; //We can even return value to function with defining return type.
}


void main(){
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    printf("%d", add(a, b)); //Function using Call By Value Method.

    getch();
}