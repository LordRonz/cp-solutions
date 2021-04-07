#include <stdio.h>

int main(void) {
    int a;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            scanf("%d", &a);
            if(a == 1) {
                printf("%d", (i >= 2 ? i - 2 : 2 - i) + (j >= 2 ? j - 2 : 2 - j));
                return 0;
            }
        }
    }
    return 0;
}