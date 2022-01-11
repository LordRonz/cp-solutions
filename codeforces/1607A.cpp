#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
    int t, a, b, res = 0;
    char letters[30], s[55];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", letters);
        scanf("\n%s", s);
        res = 0;
        for(int i = 0; s[i]; ++i) {
            for (int j = 0; j < 26; ++j) {
                if (s[i] == letters[j]) {
                    b = j;
                    if (i == 0) a = b;
                }
            }
            res += abs(b - a);
            a = b;
        }
        printf("%d\n", res);
    }
	return 0;
}
