#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
    int t, n, a[105];
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        int maxI = 0, minI = 0, mx = -1, mn = INT_MAX, res = 0;
        for(int i = 0; i < n; ++i) {
            if(a[i] > mx) {
                mx = a[i];
                maxI = i;
            }
            if(a[i] < mn) {
                mn = a[i];
                minI = i;
            }
        }
        res = min(
            min(
                maxI + 1, n - maxI
            ) +
            min(
                minI + 1, n - minI
            ),
            min(
                max(minI, maxI) + 1,
                n - min(minI, maxI)
            )
        );
        printf("%d\n", res);
    }
	return 0;
}