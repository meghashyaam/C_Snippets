/*
* Task: Determine the volume of a cuboid based on the measurement of length,
*       width and height in a centimeter unit
*
*/

#include <math.h>
#include <stdio.h>

int main(){
    int length, width, height;
    printf("Enter length:");
    scanf("%d", &length);
    printf("Enter width:");
    scanf("%d", &width);
    printf("Enter heigth:");
    scanf("%d", &height);
    int volume = length * width * height; 
    printf("Width = %d\nHeight = %d\nLength = %d", width, height, length);
    printf("\nVolume of cuboid = %d", volume);
    return 0;
}