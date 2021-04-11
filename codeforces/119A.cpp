#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b); 
}

int main()
{
	int n, a, b;
	bool simon{true};
	scanf("%d %d %d", &a, &b, &n);
	while(1) {
		int tmp;
		if(simon) {
			if((tmp = gcd(a, n)) <= n)
				n -= tmp;
			else {
				puts("1");
				return 0;
			}
		}
		else {
			if((tmp = gcd(b, n)) <= n)
				n -= tmp;
			else {
				puts("0");
				return 0;
			}
		}
		simon ^= 1;
	}
	return 0;
}