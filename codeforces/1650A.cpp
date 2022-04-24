#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
    int t;
    char s[55], a;
    scanf("%d", &t);
    while(t--) {
        scanf("%s\n", s);
        scanf("%c", &a);
        bool yes = false;
        for (int i = 0; s[i]; ++i) {
            if(s[i] == a) {
                yes = !(i & 1);
                if (yes) break;
            }
        }
        puts(yes ? "YES" : "NO");
    }
}
