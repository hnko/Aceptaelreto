/*
	Solution for the problem 419 of aceptaelreto.com

	- Telesillas - 

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

int compare(const void*a, const void*b){
	return *(int*)b - *(int*)a;
}


int main(int argc, char const *argv[])
{
	int weight, costumers, i, j, trips, table[200000];
	while(1){
		scanf("%d %d", &weight, &costumers);
		if (weight == 0 && costumers ==0) return 0;

		for(i=0; i<costumers; i++){
			scanf("%d", &table[i]);
		}
		/* sort in descending order */
		qsort(table, costumers, sizeof(int), compare);
		i = 0;
		j = costumers-1;
		trips = 0;

		while(i<j){
			if(table[i] + table[j] <= weight){ /* check if we can put two costumers in one trip*/
				i++;
				j--;
			}else{
				i++; /*if not, just put one costumer */
			}
			trips++;
		}
		if (i == j) trips++; /* don't forget the last costumer */
		printf("%d\n", trips);

	}

	return 0;
}