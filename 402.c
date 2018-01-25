/*
	Solution for the problem 402 of aceptaelreto.com

	- Las dimensiones del puzzle - 

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


//version 2
int main(int argc, char const *argv[])
{
	int num, x;
	while(1){
		scanf("%d", &num);
		if (num==0) return 0;
	
		x = sqrt(num);
		while(num % x != 0){
			x--;
		}
		printf("%d\n", num/x);
	}
	return 0;
}
/* version 1
int main(int argc, char const *argv[])
{
	int num;
	while(1){
		scanf("%d", &num);
		if (num==0) return 0;
		int x, y, aux;
		x = y = sqrt(num);
		aux = x*y;
		while(aux!=num){
			aux = x*y;
			if ((aux)<num) x++;
			else if((aux)>num) y--;
		}
		printf("%d\n", x);
	}
	return 0;
}
*/