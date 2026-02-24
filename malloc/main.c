#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Enter n:");

    scanf("%d", &n);
    printf("Address of n = %d\n", &n);
    printf("Value of n = %d\n", n);
    int *p;

    p = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", p+i);
        printf("Address %d\n", p+i);
        printf("Value %d\n", *(p+i));
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("p[%d] = %d\n", i, *(p+i));
    }

    free(p);
    return 0;

}