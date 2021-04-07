#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, m, c, mishka = 0, chris = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &m, &c);
		if(m > c) ++mishka;
		else if(m < c) ++chris;
	}
	if(mishka > chris) printf("Mishka\n");
	else if(mishka < chris) printf("Chris\n");
	else printf("Friendship is magic!^^\n");
	return 0;
}