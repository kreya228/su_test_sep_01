int main() {






    
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9) {
        printf("The number %d is between 0 and 9.\n", number);
    } else {
        printf("The number %d is not between 0 and 9.\n", number);
    }

    return 0;
}
