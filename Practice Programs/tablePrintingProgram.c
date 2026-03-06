main() {
    int num;
    printf("Enter the Number to print it's Table:");
    scanf("%d", &num);

    for(int i=1; i<11; i++){
        printf("\n%d into %d equals %d",num, i, num*i);
    }
    getch();
}