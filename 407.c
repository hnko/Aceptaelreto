/*
	Solution for the problem 407 of aceptaelreto.com

	- Rebotando en el parchis - 

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
	int box, position, dice, aux, module;
	while(1){
		scanf("%d %d %d", &box, &position, &dice);
		if (box==0 && position==0 && dice==0) return 0;

		aux = position+dice;
		if (aux<=box){
			printf("%d\n", aux);
		}else{
			module = aux%box;
			printf("%d\n", box-module);
		}
	}
	return 0;
}