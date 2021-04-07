#include <stdio.h>
#include <stdbool.h>

int main(void) {
    unsigned int n;
    scanf("%d", &n);
    for(++n; n < 10000;++n) {
        int num = n;
        bool visited[10] = {false};
        while(num) {
            if(visited[num % 10]) break;
            else visited[num % 10] = true;
            num /= 10;
        }
        if(num == 0) {
            printf("%d\n", n);
            return 0;
        }
    }
    return 0;
}