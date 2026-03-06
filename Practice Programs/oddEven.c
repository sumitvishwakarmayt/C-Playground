void main(){
    int num;
    printf("Enter the number to check for odd or even:");
    scanf("%d", &num);
    if (num%2 == 0){
        printf("The entered number %d is even.", num);
    }
    else{
        printf("The entered number %d is odd.", num);
    }
    getch();
}