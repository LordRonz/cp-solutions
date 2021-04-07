#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", max(a, max(b, c)) - min(a, min(b, c)));
	return 0;
}