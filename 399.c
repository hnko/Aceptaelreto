/*
	Solution for the problem 399 of aceptaelreto.com

	- Las perlas de la condesa - 

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
#include <math.h>

int compare(const void* a, const void* b){
	return *(int*)a - *(int*)b;
}

int main(int argc, char const *argv[])
{
	int collar[1000], new_collar[1000], flag, size, i, t, j, aux, insertions;
	while(1){
		scanf("%d", &collar[0]);
		if(collar[0] == 0) return 0;
		/*insert the perls */
		for(i=1, size=1; ;i++){
			scanf("%d", &aux);
			if(aux == 0) break;
			collar[i] = aux;
			size++;
		}
		
		if(size % 2 == 0){ /*first check if is symmetric */
			printf("NO\n");
		}else{
			qsort(collar, size, sizeof(int), compare);

			flag = 0;
			for(i=0, t=0, j=size-1, insertions=0; insertions < ceil(size/2.0); ){
				if(collar[i]==collar[i+1] && i != size-1){
					new_collar[t] = collar[i];
					new_collar[j] = collar[i];
					t++; j--;
					i += 2;
					insertions++;
				}else if(i==size-1){
					new_collar[t] = collar[i];
					insertions++;
				}else{
					flag = 1;
					break;
				}
			}
			if(flag == 1){
				printf("NO\n");
			}else{
				for(i=0; i<size; i++){
					if(i==size-1){
						printf("%d\n", new_collar[i]);
					}else{
						printf("%d ", new_collar[i]);
					}
				}
			}
		}


	}
	return 0;
}