#include<stdio.h>

int main(){
    int n;
    printf("Enter value of ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuseday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:

        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("wrong choice entered");
    }

    return 0;
}