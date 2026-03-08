#include <conio.h>
#include <stdio.h>
#define swap(a,b) {int temp=a; a=b; b=temp;}

main(){
    int x=5, y=10;
    swap(x,y);
    printf("%d   %d", x,y);

    getch();
}