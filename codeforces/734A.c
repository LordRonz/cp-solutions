#include <stdio.h>

int main(void) {
    char c;
    int n, a = 0, d = 0;
    scanf("%d\n", &n);
    while(n--) {
        scanf("%c", &c);
        if(c == 'A') ++a;
        else ++d;
    }
    if(a > d) printf("Anton\n");
    else if(a < d) printf("Danik\n");
    else printf("Friendship\n");
    return 0;
}