#include <stdio.h>
#include <math.h>

int main(){
    double n1,n2,n3,avg,sum;
    printf("Enter first number: ");
    scanf("%lf", &n1);
    printf("Enter second number: ");
    scanf("%lf", &n2);
    printf("Enter third number: ");
    scanf("%lf", &n3);
    sum = n1 + n2 + n3;
    avg = sum / 3;
    printf("Sum of 3 numbers = %lf\nAverage of three numbers = %lf", sum, avg);
    return 0;
}
