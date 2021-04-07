#include <stdio.h>

int main(void) {
    char c, s[] = "hello";
    int i = -1;
    while((c = getchar()) != '\n' && c != EOF) {
        if(i + 1 == 4 && c == s[i + 1]) {
            printf("YES\n");
            return 0;
        }
        else if(i + 1 < 5 && c == s[i + 1]) ++i;
    }
    printf("NO\n");
    return 0;
}