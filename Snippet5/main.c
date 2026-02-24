#include <stdio.h>
#include <math.h>

/*
*  Task: Calculate product of three numbers
*
*/

int main(){
    double n1, n2, n3, n4;
    printf("Enter the first number: ");
    scanf("%lf", &n1);
    printf("Enter the second number: ");
    scanf("%lf", &n2);
    printf("Enter the third number: ");
    scanf("%lf", &n3);
    n4 = n1 * n2 * n3;
    printf("Product of three numbers = %lf", n4);
    return 0;
}