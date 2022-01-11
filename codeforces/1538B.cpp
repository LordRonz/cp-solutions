#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
    int t, n, a[2 * MAX_N];
    scanf("%d", &t);
    while(t--) {
        int sum = 0, res = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i) {
            scanf("%d", a + i);
            sum += a[i];
        }
        if(sum % n) {
            puts("-1");
            continue;
        }
        int lim = sum / n;
        for(int i = 0; i < n; ++i) {
            if(a[i] > lim) {
                ++res;
            }
        }
        printf("%d\n", res);
    }
	return 0;
}