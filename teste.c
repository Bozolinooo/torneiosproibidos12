#include <stdio.h> 

int main(){
	int i, x = 1668, k = 0;
	int a[456];
	
	for(i = 0; i < 456; i++)
		a[i] = 0;
		
	for(i = 0; i < x; i++){
		scanf("%d", &k);
		a[k]++;
	}
	
	k = 0;
	
	for(i = 0; i < 456; i++)
		if(a[i] == 6)
			k++;
	
	printf("%d\n", k);
	
	for(i = 0; i < 456; i++)
		if(a[i] == 6)
			printf("%d ", i);
		
	printf("\n");
	
	return 0;
}
