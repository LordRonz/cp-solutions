#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

bool isSquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return 1;
    }
    return 0;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		if(n & 1) {
			puts("NO");
			continue;
		}
		if(isSquare(n/2)) {
			puts("YES");
		}
		else if(n % 4 == 0 && isSquare(n/4)) {
			puts("YES");
		}
		else {
			puts("NO");
		}
	}
}