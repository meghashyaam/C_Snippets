#include <stdio.h>
#include <math.h>

int main() {
    double original_price, final_price;
    printf("Enter the price before discount for the smartphone: ");
    scanf("%lf",&original_price);
    final_price = (1.0 - 0.2) * original_price;
    printf("Price of smartphone after discount = %lf", final_price);
    return 0;
}