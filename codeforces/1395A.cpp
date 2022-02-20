#include <bits/stdc++.h>

using namespace std;
#define MIN(a,b,c) min(a,min(b,c))
//0xACCE97ED;

int main() {
	int t, r, g, b, w;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d %d", &r, &g, &b, &w);
		int a = MIN(r, g, b);
		r -= a, g -= a, b -= a;
		w -= a;
		w -= a;
		w -= a;
		int odd = 0;
		if(r & 1) ++odd;
		if(g & 1) ++odd;
		if(b & 1) ++odd;
		if(w & 1) ++odd;
		bool yesnt = odd < 2;
		if(!yesnt && a > 0) {
			r++, g++, b++;
			w--;
			odd = 0;
			if(r & 1) ++odd;
			if(g & 1) ++odd;
			if(b & 1) ++odd;
			if(w & 1) ++odd;
			yesnt = odd < 2;
		}
		puts(yesnt ? "Yes" : "No");
	}
	return 0;
}