#include<stdio.h>

int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
         case 3:
         case 5: 
          case 7: 
           case 9:
           printf("Odd");
           break;
        case 2:
        case 4:
         case 6:
         case 8:
       case 10:
       printf("Even");
       break;
      
      
      
    }
    return 0;
}