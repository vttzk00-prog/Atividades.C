#include <stdio.h>


int main() {
	
	int N, A, B, x, y;
	
	
 while(scanf("%d", &N) && N != 0 ) {
 	
 	x = 0;
 	y = 0;
 	
 	for(int i = 0; i < N; i++) {
 		scanf("%d %d", &A, &B);
 		
 		if(A > B) {
 			x++;
		 }
		 else if(B > A){
		 	y++;
		 }
	 }
	 	printf("%d %d\n", x, y);
 }
	
	return 0;
}
