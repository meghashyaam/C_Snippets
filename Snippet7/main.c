#include <math.h>
#include <stdio.h>

int main() {
    double weight, height, BMI;
    printf("Enter weight(kg): ");
    scanf("%lf", &weight);
    printf("Enter height(cm): ");
    scanf("%lf", &height);
    BMI = weight / (pow((height/100),2));
    printf("BMI : %lf", BMI);
    return 0;
}