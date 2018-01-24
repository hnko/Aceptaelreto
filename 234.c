/*
	Solution for the problem 234 of aceptaelreto.com

	- Carreras de coches - 

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

int compare(const void* _a, const void * _b){
	return *(int*) _a - *(int*) _b;
}


int main(int argc, char const *argv[])
{
	int i, j, cases, cars, voltage, batteries, value_batteries[100000];
	scanf("%d", &cases);

	while(cases--){
		scanf("%d %d", &batteries, & voltage);
		for(i=0; i<batteries; i++){
			scanf("%d", &value_batteries[i]);
		}

		qsort(value_batteries, batteries, sizeof(int), &compare);
	
		cars = 0;
		i = 0;
		j = batteries-1;
		while(i<j){
			if(value_batteries[j]+value_batteries[i] >= voltage){
				cars++;
				i++;
				j--;
			}else{
				i++;
			}
		}
		printf("%d\n", cars);
	}
	return 0;
}

