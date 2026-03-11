main(){


    int a, d1, d2, d3, num;
    printf("Enter a Number to Check for Armstrong (3 Digits Only):");
    scanf("%d", &a);
    num=a;

    // Armstrong Number is a Number whose sum of cube of digits = that number.

    d3=a%10;
    a=a/10;
    d2=a%10;
    a=a/10;
    d1=a;

    if(num == (d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3)){
        printf("The entered number is ArmStrong Number.");
    }

    else{
        printf("Not an Armstrong Number.");
    }

    getch();

}