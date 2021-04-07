#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    char c, b[26] = "";
    int i = 0, j = 0;
    bool found = false;
    while((c = getchar()) != EOF && c != '\n') {
        found = false;
        for(j = 0; j < i; ++j) {
            if(c == b[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            b[i++] = c;
        }
    }
    if(i % 2 == 0)
        printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
}