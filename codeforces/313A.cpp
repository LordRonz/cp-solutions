#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n;
	scanf("%d", &n);
	if(n >= 0) {
		printf("%d\n", n);
	} else {
		int a = (n - n % (-10)) / 10;
		int b = -(n / -10) + (-(n % -100)) / 10 + n % -10;
		printf("%d\n", max(a, b));
	}
	return 0;
}