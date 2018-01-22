/*
	Solution for the problem 429 of aceptaelreto.com

	- Organizando los hangares - 

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

int max(int *table, int size, int*pos){
	int i, max=0;
	for(i=0; i<size; i++){
		if(table[i]>max){
			max = table[i];
			*pos = i;
		}
	}	
	return max;
}

int main(int argc, char const *argv[])
{
	int i, flag, pos, aux_max, num_sheds; /*hangar*/
	int size_sheds[200], num_planes, plane;

	while(1){
		scanf("%d", &num_sheds);
		if (num_sheds==0) return 0;

		/* save the size of the sheds*/
		for(i=0; i<num_sheds; i++){
			scanf("%d", &size_sheds[i]);
		}

		scanf("%d", &num_planes);
		flag=0;
		/* check if the planes can go inside the sheds*/
		while(num_planes--){
			scanf("%d", &plane);
			aux_max = max(size_sheds, num_sheds, &pos); /* find the max value */
			size_sheds[pos] = aux_max-plane; /*update the size*/
			if (size_sheds[pos]<0){
				flag=1;
			}
		}
		printf((flag==0)?"SI\n":"NO\n");

	}

	return 0;
}