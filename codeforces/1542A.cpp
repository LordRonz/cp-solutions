#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
    int t, n, a;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        int even = 0, odd = 0;
        for(int i = 0; i < 2 * n; ++i) {
            scanf("%d", &a);
            if(a & 1) ++odd;
            else ++even;
        }
        puts(odd == even ? "Yes" : "No");
    }
	return 0;
}