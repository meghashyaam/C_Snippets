#include <math.h>
#include <stdio.h>

void SelectionSort(int inp[], int inpLen) {
    printf("\n");
    for (int i = 0; i < inpLen - 1; i++) {
        int minIdx = i;
        for (int j = i+1; j < inpLen; j++) {
            if (inp[j] < inp[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            int temp = inp[i];
            inp[i] = inp[minIdx];
            inp[minIdx] = temp;
        }
        for (int a = 0; a < inpLen; a++) {
            printf("%d ", inp[a]);
        }
        printf("\n");
    }

}

int main() {
    
    int inArr[] = {2, 8, 5, 3, 9, 4, 1};
    int inArrLen = sizeof(inArr) / sizeof(inArr[0]); 
    for  (int i = 0; i < inArrLen; i++) {
        printf("inArr[%i] = %i\n",i, inArr[i]);
    }
    printf("After BubbleSort\n");
    SelectionSort(inArr,inArrLen);
    for  (int i = 0; i < inArrLen; i++) {
        printf("inArr[%i] = %i\n",i, inArr[i]);
    }
    return 0;
}