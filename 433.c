#include <stdio.h>




int main(){

	long uvas, i;
	while(scanf("%ld", &uvas)&&uvas!=0){
		long sum=0;
		for(i=1; sum<uvas; i++){
			sum+=i;
		}
		printf("%ld\n",i-1);
	}

	return 0;
}