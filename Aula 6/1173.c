#include <stdio.h>

int main(){
	
	int cu[10];
	int i, bct, aux;
	
	scanf("%d", &bct);
	cu[0] = bct;
	printf("N[0] = %d\n", cu[0]);
	
	for(i = 1; i < 10; i++){
		cu[i] = cu[i-1]*2;
		printf("N[%d] = %d\n", i, cu[i]);
	}

	return 0;
}
