#include <stdio.h>

int main(void) {
    int n, res = 0;
    char op[4];
    scanf("%d", &n);
    while(n--) {
        scanf("%s", op);
        op[1] == '+' ? ++res : --res;
    }
    printf("%d\n", res);
    return 0;
}