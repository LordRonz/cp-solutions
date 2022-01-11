#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))

//0xACCE97ED;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int m = MAX(a, b, c);
        int mc = (m == a) + (m == b) + (m == c);
        printf("%d %d %d\n", m - a + (m == a && a && mc == 1 ? 0 : 1), m - b + (m == b && b && mc == 1 ? 0 : 1), m - c + (m == c && c && mc == 1 ? 0 : 1));
    }
	return 0;
}
