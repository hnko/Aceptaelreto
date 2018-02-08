/*
	Solution for the problem 121 of aceptaelreto.com

	- Chicles de regalo - 

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
	int necesitan, dan, tiene, total, packs, resto;
	while(scanf("%d %d %d", &necesitan, &dan, &tiene)){
		if(necesitan == 0 && dan == 0 && tiene == 0) return 0;

		if(dan >= necesitan && tiene >= necesitan){
			printf("RUINA\n");

		}else if(dan == 0){ /*case 5 0 25 output should be 25 25 */
			printf("%d %d\n", tiene, tiene);

		}else{
			total = tiene;
			while(tiene >= necesitan){
				packs = tiene / necesitan;
				total += packs * dan;
				resto = tiene % necesitan;
				tiene = packs + resto;
			}
			printf("%d %d\n", total, tiene);
		}
	}
	return 0;
}