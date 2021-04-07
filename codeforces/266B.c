#include <stdio.h>

int main(void) {
    int n, t;
    char q[50];
    scanf("%d %d", &n, &t);
    scanf("\n");
    for(int i = 0; i < n; ++i) {
        scanf("%c", &q[i]);
    }
    while(t--) {
        for(int i = 0; i < n - 1; ++i) {
            if(q[i] == 'B' && q[i + 1] == 'G') {
                q[i] = 'G';
                q[i + 1] = 'B';
                ++i;
            }
        } 
    }
    for(int i = 0; i < n; ++i) {
        printf("%c", q[i]);
    }
    printf("\n");
    return 0;
}