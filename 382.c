/*
	Solution for the problem 382 of aceptaelreto.com

	- Internet en el metro - 

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
	int cases, distance, ratio, location, i, num_antennas,range;

	scanf("%d", &cases);
	while(cases--){
		scanf("%d %d", &distance, &num_antennas);
		range = 0;
		for(i=0; i<num_antennas; i++){
			scanf("%d %d", &location, &ratio);
			if(range >= location - ratio && range < location + ratio){
				range = location + ratio;
			}
		}
		printf((range>=distance)?"SI\n":"NO\n");
	}

	return 0;
}