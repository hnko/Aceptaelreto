/*
	Solution for the problem 168 of aceptaelreto.com

	- La pieza perdida - 

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
	int pieces, number, lost, i;
	while(1){
		int table[10001];
		scanf("%d", &pieces);
		
		if (pieces==0) return 0;
		/* store the numbers */
		for(i=1; i<pieces; i++){
			scanf("%d", &number);
			table[number] = 1;
		}

		lost = 0;
		for(i=1; i<=pieces; i++){
			if(!table[i]) lost = i;
			table[i] = 0;
		}
		printf("%d\n", lost);

	}

	return 0;
}