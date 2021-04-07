#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int t, n;
	double sum, x, p;
	scanf("%d", &t);
	while(t--) {
		sum = 3.0;
		p = 2.0;
		scanf("%d", &n);
		while(1) {
			x = n / sum;
			if(ceil(x) == floor(x)) {
				printf("%d\n", (int)x);
				break;
			}
			p *= 2.0;
			sum += p;
		}
	}
	return 0;
}