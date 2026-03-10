main(){
    int r;
    printf("Enter range to print fibonacci series:");
    scanf("%d", &r);

    int a=0, b=1, c=0;
    c = a+b;

    for(int i=0; i<r; i++){
        printf("%d  ", c);
        a=b;
        b=c;
        c = a+b;
    }

    getch();
}


