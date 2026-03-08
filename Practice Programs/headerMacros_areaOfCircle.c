#define pi 3.14

main(){
    int r;
    printf("Program to find Area of Circle. \n\n");
    printf("Enter the radius of the circle:");
    scanf("%d", &r);
    // printf("%.2f", pi);
    printf("Area of the circle is: %f.", pi*r*r);

    getch();
}