/*
	Solution for the problem 379 of aceptaelreto.com

	- Creciente por los pelos - 

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

int main(){

	int i, j, num, arr[100];
	while(1){
		scanf("%d", &num);
		if (num == 0) return 0;
		/* save the numbers */
		for(i=0; i<num; i++){
			scanf("%d", &arr[i]);
		}
		/* starting for the end, check if are iquals */
		j = 0;
		for(i=num-1; i>0; i--){
			if(arr[i] == arr[i-1]){
				j = i;
				break;
			}
		}
		arr[j]++; /* sum one */

		for(i=j+1; i<num; i++){ /* put the other with the same value */
			arr[i] = arr[j];
		}
		
		/* print the result */
		for(i=0; i<num; i++){
			if(i != num-1) printf("%d ", arr[i]);
			else printf("%d\n", arr[i]);
		}

	}
	return 0;
}