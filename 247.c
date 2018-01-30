/*
	Solution for the problem 247 of aceptaelreto.com

	- Saliendo de la crisis - 

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

	int i, flag, num, current, prev;
	while(1){
		scanf("%d", &num);
		if (num == 0) return 0;
		/* save the numbers */
		scanf("%d", &prev);
		for(i=1, flag=0; i<num; i++){
			scanf("%d", &current);
			if(prev >= current) flag=1; /* check if the next number is higher */
			prev = current;
		}
		
		printf((flag==0) ? "SI\n" : "NO\n");
	}
	return 0;
}