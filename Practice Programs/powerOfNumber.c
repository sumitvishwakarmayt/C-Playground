main(){
    int a,b;
    printf("Enter the base:");
    scanf("%d", &a);
    printf("\nEnter the power:");
    scanf("%d", &b);

    for(int i=0; i<b; i++){
        a=a*b;
    }

    printf("%d", a);

    getch();
}