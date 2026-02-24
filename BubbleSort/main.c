#include <math.h>
#include <stdio.h>

void BubbleSort(int inp[], int inpLen) {
    for (int i = 0; i < inpLen - 1; i++) {
        for (int j = 0; j < inpLen - i - 1; j++) {
            if (inp[j+1] > inp[j]) {
                int temp = inp[j+1];
                inp[j+1] = inp[j];
                inp[j] = temp;
            }
        }
    }
}

int main() {
    
    int inArr[] = {40, 10, 30, 20, 50};
    int inArrLen = sizeof(inArr) / sizeof(inArr[0]); 
    
    for  (int i = 0; i < inArrLen; i++) {
        printf("inArr[%i] = %i\n",i, inArr[i]);
    }

    printf("After BubbleSort\n");
    BubbleSort(inArr,inArrLen);
    
    for  (int i = 0; i < inArrLen; i++) {
        printf("inArr[%i] = %i\n",i, inArr[i]);
    }

    return 0;    
}