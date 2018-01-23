/*
	Solution for the problem 171 of aceptaelreto.com

	- Abadias pirenaicas - 

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
	int i, count, num_mountains, mountains[100000], altitude;

	while(1){
		scanf("%d", &num_mountains);
		if (num_mountains==0) return 0;

		for(i=0; i<num_mountains; i++){
			scanf("%d", &mountains[i]);
		}

		count = 1;
		altitude = mountains[num_mountains-1];
		for(i=num_mountains-2; i>=0; i--){
			if(mountains[i] > altitude){
				altitude = mountains[i];
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
