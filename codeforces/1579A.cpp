#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
    int t;
    char s[55];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        int a = 0, b = 0, c = 0;
        for(int i = 0; s[i] != '\0'; ++i) {
            if(s[i] == 'A') {
                ++a;
            }
            else if(s[i] == 'B') {
                ++b;
            }
            else if(s[i] == 'C') {
                ++c;
            }
        }
        puts(a + c == b ? "YES" : "NO");
    }
	return 0;
}