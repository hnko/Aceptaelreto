/*
	Solution for the problem 340 of aceptaelreto.com

	- Cuadrados con cerillas - 

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
	int cases, n, m;
	
	scanf("%d", &cases);
	while(cases--){
		scanf("%d %d", &n, &m);
		printf("%d\n", n*(m+1) + m*(n+1));
	}
	
	return 0;
}
