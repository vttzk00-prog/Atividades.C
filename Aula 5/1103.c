#include <stdio.h>

int main(){
	
	int ha, ma, hb, mb, x, y, z, i;
	
	for(;scanf("%d%d%d%d", &ha, &ma, &hb, &mb) == 4;){
		
		if(ha == 0 && ma == 0 && hb == 0 && mb == 0){
			break;
		}
		
	
	x = ha * 60;
	y = hb * 60;
	z = (y + mb) - (x + ma);
	
	if(z<0){
		z+= 24 * 60;
		
	}
	printf("%d\n", z);
}
	return 0;
}
