#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, x;
	scanf("%d", &t);
	while(t--) {
		int tot = 0;
		scanf("%d", &x);
		for(int j = 1; j < 10; ++j) {
			for(int i = 1; i < 5; ++i) {
				tot += i;
				if(x % 10 == j) {
					if(to_string(x).length() == i) {
						printf("%d\n", tot);
						break;
					}
				}
			}
		}
	}
	return 0;
}