#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
	int t, n, a[2005];
	scanf("%d", &t);
	while(t--) {
		int odd = 0, even = 0;
		scanf("%d", &n);
		for(int i = 0; i < 2 * n; ++i) {
			scanf("%d", &a[i]);
			a[i] & 1 ? ++odd : ++even;
		}
		int od1 = -1, ev1 = -1;
		int bl[2] = {-1, -1};
		if(odd & 1 && even & 1) {
			for(int i = 0; i < 2 * n; ++i) {
				if(a[i] & 1) {
					bl[0] = i;
				}
				else {
					bl[1] = i;
				}
			}	
		}
		else {
			bool o = odd > even;
			for(int i = 0; i < 2 * n; ++i) {
				if(o) {
					if(a[i] & 1) {
						if(bl[0] == -1) {
							bl[0] = i;
						}
						else bl[1] = i;
					}
				}
				else {
					if(!(a[i] & 1)) {
						if(bl[0] == -1) {
							bl[0] = i;
						}
						else bl[1] = i;
					}
				}
			}
		}
		for(int i = 0; i < 2 * n; ++i) {
			if(i == bl[0] || i == bl[1]) continue;
			if(a[i] & 1) {
				if(od1 == -1) {
					od1 = i;
				}
				else {
					printf("%d %d\n", od1 + 1, i + 1);
					od1 = -1;
				}
			}
			else {
				if(ev1 == -1) {
					ev1 = i;
				}
				else {
					printf("%d %d\n", ev1 + 1, i + 1);
					ev1 = -1;
				}
			}
		}
	}
	return 0;
}