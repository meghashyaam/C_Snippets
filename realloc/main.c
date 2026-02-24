#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int *p,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    p = (int*) calloc(n, sizeof(int));
    if (p == NULL){
        printf("\nSome error occured.\nUnable to allocate memory to array");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter elementh [%d]: ", i);
        scanf("%d", (p+i));
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("p[%d] = %d\n", i, *(p+i));
    }
    char choice;
    do
    {
        printf("\nDo you want to add more elements into the array? [y/n] : ");
        scanf(" %c", &choice);
    } while (choice != 'y' && choice != 'n');
    
    if (choice == 'y') {
        
        int n2;
        do {
            printf("\nEnter the new size of the array (new size must be bigger than old size): ");
            scanf("%d", &n2);
        } while (n2 <= n);

        int *temp = (int*) realloc(p, n2 * sizeof(int));

        if (temp == NULL) {
            printf("\nSome error occured.\nUnable to reallocate memory for array.");
            return 1;
        }

        p = temp;
        for (int i = n; i < n2; i++) {
            printf("Enter elementh [%d]: ", i);
            scanf("%d", p+i);
        } 

        printf("\n");
        for (int i = 0; i < n2; i++) {
            printf("p[%d] = %d\n", i, *(p+i));
        }
    }
    free(p);
    return 0;
}