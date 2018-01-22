/*
	Solution for the problem 437 of aceptaelreto.com

	- El anuncio mas caro del ano - 

    Copyright (C) 2018 hnko
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
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