#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int n;
    
    printf("Enter n:");

    cin >> n;
    printf("Address of n = %d\n", &n);
    printf("Value of n = %d\n", n);
    int *p;

    p = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        cin >> *(p+i);
        printf("Address %d\n", p+i);
        printf("Value %d\n", *(p+i));
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("p[%d] = %d\n", i, *(p+i));
    }
    printf("sizeof p = %zu\n", sizeof(p));
    printf("sizeof each elememt in p = %zu\n", sizeof(p[0]));

    return 0;
}