#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

bool isPrime(int n) 
{  
	if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n % 2 == 0 || n % 3 == 0) return false; 
  
    for (int i = 5; i * i<= n; i += 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int main()
{
	int n;
	scanf("%d", &n);
	if(!(n & 1)) {
		if((n / 2) & 1) {
			printf("%d %d\n", n / 2 + 1, n / 2 - 1);
		}
		else printf("%d %d\n", n/2, n/2);
		return 0;
	}
	else {
		int a = (n + 1) / 2, b = (n - 1) / 2;
		while(isPrime(a) || isPrime(b)) a++, b--;
		printf("%d %d\n", a, b);
	}
	return 0;
}