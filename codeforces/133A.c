#include <stdio.h>

int main(void) {
    char c;
    while((c = getchar()) != EOF && c != '\n') {
        switch(c) {
            case 'H':
            case 'Q':
            case '9':
                printf("YES\n");
                return 0;
        }
    }
    printf("NO\n");
    return 0;
}