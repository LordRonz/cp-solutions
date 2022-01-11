#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
    int t, n, a[55];
    scanf("%d", &t);
    while(t--) {
        int sum = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i) {
            scanf("%d", a + i);
            sum += *(a + i);
        }
        if(sum == n) {
            puts("0");
            continue;
        }
        if(sum > n) {
            printf("%d\n", sum - n);
            continue;
        }
        puts("1");
    }
	return 0;
}
