#include <stdio.h>

int main(int argc, char const *argv[])
{	
	long t, cajas, palomas;
	scanf("%ld", &t);
	while(t--){
		scanf("%ld %ld", &palomas, &cajas);
		printf((cajas>=palomas)?"ROMANCE\n":"PRINCIPIO\n");
	}
	return 0;
}