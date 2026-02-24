#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main() {
    int *p,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    p = (int*) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Enter element [%d]: ", i);
        scanf("%d", (p+i));
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("p[%d] = %d\n", i, *(p+i));
    }
    free(p);
    return 0;
}