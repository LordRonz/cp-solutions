#include <stdio.h>

int main(void) {
    char s1[105], s2[105];
    scanf("%s %s", s1, s2);
    for(int i = 0; s1[i] != '\0'; ++i) {
        if((s1[i] - (s1[i] < 97 ? 65 : 97)) > (s2[i] - (s2[i] < 97 ? 65 : 97))) {
            printf("1");
            return 0;
        }
        else if((s1[i] - (s1[i] < 97 ? 65 : 97)) < (s2[i] - (s2[i] < 97 ? 65 : 97))) {
            printf("-1");
            return 0;
        }
    }
    printf("0");
    return 0;
}