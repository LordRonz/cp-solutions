#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int smallestDivisor(int n) { 
    if (n % 2 == 0) 
        return 2; 

    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 

    return n; 
}

int main() {
	long t, n, k;
	scanf("%ld\n", &t);
	while(t--) {
		scanf("%ld %ld", &n, &k);
		while(n & 1) {
			n += smallestDivisor(n);
			--k;
		}
		n += k * 2;
		printf("%ld\n", n);
	}
	return 0;
}