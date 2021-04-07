#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int arr[120];
    char c;
    int i = 0;
    bool swap = false;
    while((c = getchar()) != EOF && c != '\n') {
        if(c != '+') 
            arr[i++] = c - '0'; 
    }
    for(int j = 0; j < i - 1; ++j) {
        for(int k = 0; k < i - 1 - j; ++k) {
            if(arr[k] > arr[k + 1]) {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
                swap = true;
            }
        }
        if(!swap) break;
        swap = false;
    }
    for(int j = 0; j < i; ++j) {
        printf("%d", arr[j]);
        j < i - 1 ? printf("+") : printf("\n");
    }
    return 0;
}