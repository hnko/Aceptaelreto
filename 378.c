/*
	Solution for the problem 378 of aceptaelreto.com

	- La justicia de la loteria - 

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
#include <stdlib.h>

typedef struct{
	int gastado;
	int premiado;
} Localidades;

int compare(const void* _a, const void* _b){
	Localidades *a, *b; 
	a = (Localidades*) _a;
	b = (Localidades*) _b;
	if(a->gastado < b->gastado) return -1;
	else if (a->gastado > b->gastado) return 1;
	else return a->premiado - b->premiado;
}

Localidades localidades[100000];

int main(int argc, char const *argv[])
{
	int i, flag, casos;
	while(1){
		scanf("%d", &casos); if(casos == 0) return 0;
		for(i=0; i<casos; i++){
			scanf("%d %d", &localidades[i].gastado, &localidades[i].premiado);
		}
		qsort(localidades, casos, sizeof(Localidades), compare);
		for(i=1, flag=0; i<casos && flag == 0; i++){
			if(localidades[i].gastado > localidades[i-1].gastado && localidades[i].premiado <= localidades[i-1].premiado){
				flag = 1;
			}
		}
		flag == 0 ? printf("SI\n") : printf("NO\n");
	}
	return 0;
}