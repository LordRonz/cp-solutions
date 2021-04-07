#include <stdio.h>

int main(void) {
    int lucky = 0;
    char c;
    while((c = getchar()) != EOF && c != '\n') {
        if(c == '4' || c == '7') lucky++;
    }
    if(lucky == 4 || lucky == 7) printf("YES\n");
    else printf("NO\n");
    return 0;
}