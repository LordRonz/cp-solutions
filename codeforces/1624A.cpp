#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, a, mx = -1, mn = INT_MAX;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i) {
            scanf("%d", &a);
            if(a > mx) {
                mx = a;
            }
            if(a < mn) {
                mn = a;
            }
        }
        printf("%d\n", mx - mn);
    }
	return 0;
}
