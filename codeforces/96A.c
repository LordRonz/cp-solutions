#include <stdio.h>

int main(void) {
    char c, b = '2';
    int count = 1;
    while((c = getchar()) != EOF && c != '\n') {
        if(b == c) ++count;
        else count = 1;
        b = c;
        if(count >= 7) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}