#include <stdio.h>

int main(void) {
    char c;
    int i = 0;
    while((c = getchar()) != EOF && c != '\n') {
        if(i++ == 0) {
            if(c > 96)
                c -= 32;
        }
        printf("%c", c);
    }
    printf("\n");
    return 0;
}