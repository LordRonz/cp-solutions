#include <stdio.h>

int main(void) {
    char s[100];
    scanf("%s", s);
    for(int i = 0; s[i] != '\0'; ++i) {
        if(s[i] < 'a') s[i] += 32;
        if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i') {
            printf(".%c", s[i]);
        }
    }
    printf("\n");
}