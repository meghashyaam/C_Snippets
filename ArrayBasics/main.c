#include <math.h>
#include <stdio.h>

int main() {
    char car[][20] = {"Mustang", "Camry", "Camaro"};
    int nums[5]; 

    int car_size = sizeof(car) / sizeof(car[0]);

    for (int i = 0; i < car_size; i++) {
        printf("Elementh [%d] of car = %s\n",i,car[i]);
    }

    int nums_size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < nums_size; i++) {
        nums[i] = pow(i,2);
    }

    for (int i = 0; i < nums_size; i++) {
        printf("Elementh [%d] of nums = %d\n", i, nums[i]);
    }

    return 0;
}