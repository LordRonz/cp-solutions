#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n;
	scanf("%d", &n);
	printf("%s\n", n & 1 ? "Ehab" : "Mahmoud");
	return 0;
}