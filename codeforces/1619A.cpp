#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
    int t;
    char s[105];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        int n = strlen(s);
        if(n & 1) {
            puts("NO");
            continue;
        }
        bool yes = true;
        int m = n / 2;
        for(int i = 0; i < m; ++i) {
            if(s[i] != s[i + m]) {
                yes = false;
                break;
            }
        }
        puts(yes ? "YES" : "NO");
    }
	return 0;
}