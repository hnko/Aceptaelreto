/*
	Solution for the problem 272 of aceptaelreto.com

	- Tres dedos en cada mano - 

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
	int cases, i, six[100000], num;
	scanf("%d", &cases);
	while(cases--){
		scanf("%d", &num);
		i=0;
		while(num/6 != 0){
			six[i] = num%6;
			num /= 6;
			i++;
		}

		six[i] = num;
		for(;i>=0; i--){
			printf("%d", six[i]);
		}
		printf("\n");

	}
	return 0;
}