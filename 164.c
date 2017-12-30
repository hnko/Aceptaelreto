/*
	Solution for the problem 164 of aceptaelreto.com

	- Area de un rectangulo - 

    Copyright (C) 2017 hnko
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
	int x1, x2, y1, y2;

	while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) && (x2>=x1 && y2>=y1)){ /* take into account that a line could be a rectangle */
		printf("%d\n", (y2-y1)*(x2-x1));
	}

	return 0;
}