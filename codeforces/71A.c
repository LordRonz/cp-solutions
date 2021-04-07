#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100];
    int i = 0;
    scanf("%d", &i);
    for (; i > 0; --i) {
        scanf("%s", s);
        strlen(s) <= 10 ? printf("%s\n", s) : printf("%c%d%c\n", s[0], (int)strlen(s) - 2, s[strlen(s) - 1]);
    }
}