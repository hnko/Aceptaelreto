/*
	Solution for the problem 241 of aceptaelreto.com

	- Me quiere, no me quiere - 

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

/* limit cases: 12->0, 13->1, 5->IMPOSIBLE */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while(t--){
		int sheets, count;
		scanf("%d", &sheets);

		count=0;
		while(sheets>0 && sheets%3!=0){
			sheets-=4;
			count++;
		}
		if(sheets<3 && sheets!=0){
			printf("IMPOSIBLE\n");
		}else{
			printf("%d\n", count);	
		}

	}

	return 0;
}

