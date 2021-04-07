#include <stdio.h>
#include <string.h>

int main(void) {
    char s[110], t[110];
    scanf("%s", s);
    scanf("%s", t);
    if(strlen(s) != strlen(t)) {
        printf("NO\n");
        return 0;
    }
    for(int i = 0, j = strlen(t) - 1; i < strlen(s); ++i, --j) {
        if(s[i] != t[j]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}