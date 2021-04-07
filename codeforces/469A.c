#include <stdio.h>

int main(void)
{
	int n, x[110], y[110], p1, p2;
	scanf("%d\n", &n);
	scanf("%d", &p1);
	for(int i = 0; i < p1; ++i)
		scanf("%d", &x[i]);
	scanf("%d", &p2);
	for(int i = 0; i < p2; ++i)
		scanf("%d", &y[i]);
	int i, key, j;  
    for (i = 1; i < p1; i++) 
    {  
        key = x[i];  
        j = i - 1;  
        while (j >= 0 && x[j] > key) 
        {  
            x[j + 1] = x[j];  
            j = j - 1;  
        }  
        x[j + 1] = key;
    }
	for (i = 1; i < p2; i++) 
    {  
        key = y[i];
        j = i - 1;  
        while (j >= 0 && y[j] > key) 
        {  
            y[j + 1] = y[j];  
            j = j - 1;  
        }  
        y[j + 1] = key;
    }
	for(int i = 1, j = 0, k = 0; i <= n; ++i) {
		if(i == x[j] && i == y[k]) ++j, ++k;
		else if(i == x[j]) ++j;
		else if(i == y[k]) ++k;
		else {
			printf("Oh, my keyboard!\n");
			return 0;
		}
	}
	printf("I become the guy.\n");
	return 0;
}