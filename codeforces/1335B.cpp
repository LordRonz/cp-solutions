#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))

typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n, a, b;
	char* s = nullptr;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &n, &a, &b);
		s = new char[n + 1];
		char c = 'a';
		for(int i = 0, j = 0; i < n; ++i, ++j) {
			if(i % b == 0) {
				j = 0;
			}
			c += j;
			s[i] = c;
			c = 'a';
		}
		s[n] = '\0';
		printf("%s\n", s);
		delete[] s;
	}
	return 0;
}