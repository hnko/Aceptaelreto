#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{	
	long grosor, altura;
	double grosor_metros, aux;
	while(scanf("%ld %ld", &grosor, &altura)!=EOF){
		grosor_metros=0.000001*grosor;
		
		aux=altura/grosor_metros;
		
		printf("%.lf\n", ceil(log(aux)/log(2)));
	}

	return 0;
}