#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf("grade A+");
    }
    else if(a>=80){
        printf("grade A");
    }
    else if(a>=70){
        printf("grade B");
    }
    else if(a>=60){
        printf("grade C");
    }
    else if(a>=50){
        printf("grade D");
    }
    else if(a>=40){
        printf("grade E");
    }
    else{
        printf("FAIL");
    }
    return 0;
}