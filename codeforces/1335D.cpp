#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
typedef pair<int, int> pii;
typedef long long ll;
//0xACCE97ED;

int main() {
	int t;
	char sdk[10][10];
	scanf("%d", &t);
	while(t--) {
		for(int i = 0; i < 9; ++i) {
			scanf("%s", &sdk[i][0]);
		}
		for(int i = 0; i < 9; ++i) {
			for(int j = 0; j < 9; ++j) {
				if(sdk[i][j] == '2') sdk[i][j] = '1';
			}
		}
		for(int i = 0; i < 9; ++i) {
			printf("%s\n", sdk[i]);
		}
	}
	return 0;
}