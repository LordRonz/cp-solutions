#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
    int t, k, x, memo[1000];
    scanf("%d", &t);
    for(int i = 0, j = 1; i < 1000; ++i, ++j) {
        while(j % 3 == 0 || j % 10 == 3) ++j;
        memo[i] = j;
    }
    while(t--) {
        scanf("%d", &k);
        printf("%d\n", memo[k - 1]);
    }
	return 0;
}