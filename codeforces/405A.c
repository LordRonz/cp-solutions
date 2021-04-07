#include <stdio.h>

int main(void)
{
	int n, p[110], key, i, j; 
	scanf("%d", &n);
	for(i = 0; i < n; ++i) {
		scanf("%d", &p[i]);
	}
	for (i = 1; i < n; i++) 
    {  
        key = p[i];  
        j = i - 1;  
        while (j >= 0 && p[j] > key) 
        {  
            p[j + 1] = p[j];  
            j = j - 1;  
        }  
        p[j + 1] = key;
    }
	for(i = 0; i < n; ++i) {
		printf("%d ", p[i]);
	}
	printf("\n");
	return 0;
}