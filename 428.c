/*
	Solution for the problem 428 of aceptaelreto.com

	- Tendencia al lado oscuro - 

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
	int t, num, count;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &num);
		count = 0;

		while(num/5!=0){
			if (num%5==4) count++;
			num /= 5;
		}
		if(num==4) count++;
		
	printf((count<2)?"NO\n": "SI\n");
	}
	return 0;
}


