#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

bool isPrime(long n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n % 2 == 0 || n % 3 == 0) return false; 
  
    for (int i = 5; i * i <= n; i += 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
}

bool isPerfectSquare(long double x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 

int main()
{
	int n;
	long double num;
	scanf("%d", &n);
	while(n--) {
		scanf("%Lf", &num);
		if(isPerfectSquare(num)) {
			if(isPrime((long)sqrt(num))) {
				printf("YES\n");
			}
			else printf("NO\n");
		}
		else printf("NO\n");
	}
	return 0;
}