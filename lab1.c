#include <stdio.h>
#include <conio.h>
int main(void)
{
    int b1, b2, b3;
    float x1, x2, x3;
    printf("Enter b1 -> ");
    scanf("%d", &b1);
    printf("Enter b2 -> ");
    scanf("%d", &b2);
    printf("Enter b3 -> ");
    scanf("%d", &b3);
    x1 = b1 / 1;
    x2 = b2 / 2;
    x3 = b3 / 3;
    
    if(b1 & 1 && b1 < b2 &&  b1 < b3){
        printf("наименьший параметр 1\n"); 
    }

    if(b1 % 2 == 0 && b1 < b2 &&  b1 < b3){
        printf("%.1f\n", x1);
    }


     if(b2 & 1 && b2 < b1 &&  b2 < b3){
        printf("наименьший параметр 2\n"); 
    }
    if(b2 % 2 == 0 && b2 < b1 &&  b2 < b3){
        printf("%.2f\n", x2);
    }



    if(b3 & 1 && b3 < b1 &&  b3 < b2){
        printf("наименьший параметр 3\n"); 
    }
    if(b3 % 2 == 0 && b3 < b1 &&  b3 < b2){
        printf("%.3f\n", x3);
    }
    return 0;
}