#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
    int t, a, b;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &a, &b);
        int ans = a ? a + b * 2 + 1 : 1;
        printf("%d\n", ans);
    }
}
