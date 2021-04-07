#include <stdio.h>

int main(void) {
    int n, a[110], sum = 0, min = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < n - i - 1; ++j) {
            if(a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; ++i) {
        min += a[i];
        sum -= a[i];
        if (min > sum) {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    printf("%d\n", n);
    return 0;
}