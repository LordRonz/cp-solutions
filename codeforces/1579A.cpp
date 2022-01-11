#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
    int t;
    char s[55];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        int a = 0, b = 0, c = 0;
        for(int i = 0; s[i] != '\0'; ++i) {
            if(s[i] == 'A') {
                ++a;
            }
            else if(s[i] == 'B') {
                ++b;
            }
            else if(s[i] == 'C') {
                ++c;
            }
        }
        puts(a + c == b ? "YES" : "NO");
    }
	return 0;
}