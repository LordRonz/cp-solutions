#include <stdio.h>

int main(void) {
    char c, b = 'z';
    int i = 0, count = 0;
    scanf("%d", &i);
    i++;
    while(i--) {
        c = getchar();
        if(c == b) ++count;
        b = c;
    }
    printf("%d\n", count);
    return 0;
}