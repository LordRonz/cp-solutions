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
    int t, a, b, res = 0;
    char letters[30], s[55];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", letters);
        scanf("\n%s", s);
        res = 0;
        for(int i = 0; s[i]; ++i) {
            for (int j = 0; j < 26; ++j) {
                if (s[i] == letters[j]) {
                    b = j;
                    if (i == 0) a = b;
                }
            }
            res += abs(b - a);
            a = b;
        }
        printf("%d\n", res);
    }
	return 0;
}
