/*
	Solution for the problem 119 of aceptaelreto.com

	- Escudos del ejercito romano - 

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
#include <math.h>

int main(int argc, char const *argv[])
{
	int sum, aux, num_soldiers;
	while(1){
		scanf("%d", &num_soldiers);
		if (num_soldiers==0) return 0;

		sum = 0;
		while(num_soldiers>0){
			aux = sqrt(num_soldiers);
			sum += (aux*aux) + (4*aux);
			num_soldiers -= aux*aux;
		}
		printf("%d\n", sum);
	}

	return 0;
}