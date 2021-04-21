#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, n;
	char s[50005], a[50005], b[50005];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		scanf("%s", s);
		bool one = 0;
		for(int i = 0; i < n; ++i) {
			switch(s[i]) {
				case '2':
					if(!one) {
						a[i] = '1';
						b[i] = '1';
					}
					else {
						a[i] = '0';
						b[i] = '2';
					}
					break;
				case '0':
					a[i] = '0';
					b[i] = '0';
					break;
				case '1':
					if(!one) {
						a[i] = '1';
						b[i] = '0';
						one = 1;
					}
					else {
						a[i] = '0';
						b[i] = '1';
					}
					break;
			}
		}
		for(int i = 0; i < n; ++i) {
			printf("%c", a[i]);
		}
		puts("");
		for(int i = 0; i < n; ++i) {
			printf("%c", b[i]);
		}
		puts("");
	}
	return 0;
}