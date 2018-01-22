/*
	Solution for the problem 321 of aceptaelreto.com
	
	- Double decker - 

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
	int cases, range, up, down, aux;

	scanf("%d", &cases);
	while(cases--){
		scanf("%d %d", &up, &down);
		aux = up + down; /* to find the number of occupants */
		range = ((aux*(aux+1))/2)+1; /*take the level of the range */
		range = range + up; /* sum the up to take the correct range */
		printf("%d\n", range);
	}

	return 0;
}
/*
 1(0 0)
 2(0 1) 3(1 0)
 4(0 2) 5(1 1)  6(2 0)
 7(0 3) 8(1 2)  9(2 1)  10(2 0)
11(0 4) 12(1 3) 13(2 2) 14(3 1) 15(4 0)
*/