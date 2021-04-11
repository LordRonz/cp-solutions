#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int q;
	unsigned long long a, b, c;
	scanf("%d", &q);
	while(q--) {
		scanf("%llu %llu %llu", &a, &b, &c);
		unsigned long long alice = MIN(a, b, c);
		unsigned long long bob = a + b + c - alice - MAX(a, b, c);
		unsigned long long third = MAX(a, b, c);
		unsigned long long tmp = 0;
		if(bob > alice) {
			tmp = bob - alice;
			alice += min(bob - alice, third);
		}
		else if(alice > bob) {
			tmp = alice - bob;
			bob += min(alice - bob, third);
		}
		third -= tmp;
		alice += third >> 1;
		printf("%llu\n", alice);
	}
	return 0;
}