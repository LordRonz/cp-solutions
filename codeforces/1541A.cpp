#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        if (n & 1) {
            printf("3 1 2");
            for (int i = 5; i <= n; i += 2) {
                printf(" %d %d", i, i - 1);
            }
        } else {
            for (int i = 2; i <= n; i += 2) {
                printf("%d %d ", i, i - 1);
            }
        }
        puts("");
    }
	return 0;
}