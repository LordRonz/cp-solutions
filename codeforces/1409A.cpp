#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, a, b;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", (int)ceil(abs(a - b) / 10.0));
	}
	return 0;
}