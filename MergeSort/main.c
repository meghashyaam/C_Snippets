#include <math.h>
#include <stdio.h>

void Merge(int arr1[], int arr2[], int arr[], int len1, int len2, int len) {
    int i_1 = 0;
    int i_2 = 0;
    int i = 0;

    while(i_1 < len1 && i_2 < len2) {
        if (arr1[i_1] <= arr2[i_2]) {
            arr[i++] = arr1[i_1++];
        } else {
            arr[i++] = arr2[i_2++];
        }
    }

    while (i_1 < len1) {
        arr[i++] = arr1[i_1++];
    }

    while (i_2 < len2) {
        arr[i++] = arr2[i_2++];
    }
}

void MergeSort(int arr[], int len){
    if (len > 1) {
        int len1 = len/2;
        int len2 = len - len1;
        int arr1[len1], arr2[len2];

        for (int i = 0; i < len; i++) {
            if (i < len1) {
                arr1[i] = arr[i];
            } else {
                arr2[i-len1] = arr[i];
            }
        }

        printf("Arr1: [");

        for (int a = 0; a < len1; a++) {
            printf("%d ", arr1[a]);
        }  
        
        printf("]\nArr2: [");

        for (int a = 0; a < len2; a++) {
            printf("%d ", arr2[a]);
        }        

        printf("]\n");

        MergeSort(arr1,len1);
        MergeSort(arr2,len2);

        Merge(arr1,arr2,arr,len1,len2,len);

        printf("Arr sorted: [");

        for (int a = 0; a < len; a++) {
            printf("%d ", arr[a]);
        }     

        printf("]\n");
    }
}

int main() {
    int arr [] = {2,8,5,3,9,4,1,7};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int a = 0; a < len; a++) {
        printf("%d ", arr[a]);
    }
    printf("\n");
    MergeSort(arr, len);
    for (int a = 0; a < len; a++) {
        printf("%d ", arr[a]);
    }
    return 0;
}