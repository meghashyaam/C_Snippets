#include <stdio.h>
#include <math.h>

void InsertionSort(int a[], int n){
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if(a[j] < a[j-1]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            } else {
                break;
            }
        }
        for (int c = 0; c < n; c++) {
            printf("%d ", a[c]);
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {2, 8, 5, 3, 9, 4};
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrLen; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    InsertionSort(arr, arrLen);
    for (int i = 0; i < arrLen; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}