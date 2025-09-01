#include<stdio.h>
int main(){
    int units;
    float bill = 0;

    printf("Enter the number");
    scanf("%d", &units);

   
    if (units <= 50) {
        bill = units * 2;
    } else if (units <= 100) {
        bill = (50 * 2) + ((units - 50) * 3);
    } else if (units <= 200) {
        bill = (50 * 2) + (50 * 3) + ((units - 100) * 4);
    } else if (units <= 300) {
        bill = (50 * 2) + (50 * 3) + (100 * 4) + ((units - 200) * 5);
    } else if (units <= 500) {
        bill = (50 * 2) + (50 * 3) + (100 * 4) + (100 * 5) + ((units - 300) * 6);
    } else {
        printf("Units exceed the maximum slab range (500 units).\n");
        return 1; 
    }

    
    printf("The total electricity bill is: ₹%.2f\n", bill);

    return 0;
}