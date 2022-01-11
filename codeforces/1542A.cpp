#include <bits/stdc++.h>

using namespace std;

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