#include <bits/stdc++.h>

int main() {
    int t;
    char s[55], cc[26];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        memset(cc, 0, 26);
        for(int i = 0; s[i]; ++i) {
            if(cc[s[i] - 'a'] < 2) cc[s[i] - 'a']++;
        }
        int res = 0;
        for(int i = 0; i < 26; ++i) {
            res += cc[i];
        }
        printf("%d\n", res / 2);
    }
	return 0;
}