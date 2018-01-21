#include <stdio.h>

int main(int argc, char const *argv[])
{	
	int t, minutos, horas, segundos, horas_aux, minutos_aux, segundos_aux;
	scanf("%d", &t);
	while(t--){
		scanf("%d:%d:%d", &horas, &minutos, &segundos);
		horas_aux = 23-horas;
		minutos_aux=59-minutos;
		segundos_aux=60-segundos;
		if(segundos_aux==60){
			segundos_aux=0;
			minutos_aux++;
		}
		if(minutos_aux==60){
			minutos_aux=0;
			horas_aux++;
		}
		
		printf("%02d:%02d:%02d\n", horas_aux, minutos_aux, segundos_aux);
	}

	return 0;
}