#include <stdio.h>

int main(void) {
    int l = 0, u = 0, len = 0;
    char s[150], c;
    while((c = getchar()) != EOF && c != '\n') {
        if(c < 97) u++;
        else l++;
        s[len++] = c;
    }
    for(int i = 0; i < len; ++i) {
        if(l >= u) {
            s[i] = s[i] < 97 ? s[i] + 32 : s[i];
        }
        else {
            s[i] = s[i] < 97 ? s[i] : s[i] - 32;
        }
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}