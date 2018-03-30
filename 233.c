/*
	Solution for the problem 233 of aceptaelreto.com

	- Menor numero con la misma suma de digitos - 

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
	int num, remainder, n, i;
	while(1){
		scanf("%d", &num); if (num == 0) return 0;
		remainder = num % 9;
		n = num/9;
		if(remainder > 0) printf("%d", remainder);
		for(i=0; i<n; i++) printf("%d", 9);
		printf("\n");
	}
	return 0;
}