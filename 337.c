/*
	Solution for the problem 337 of aceptaelreto.com

	- La abuela Maria - 

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
	int i, j, t, table_upper[6], table_down[6], flag, tot;
	scanf("%d", &t);
	while(t--){
		for(i=0; i<6; i++){
			scanf("%d", &table_upper[i]);
		}
		for(i=0; i<6; i++){
			scanf("%d", &table_down[i]);
		}
		flag=0;
		tot = table_upper[0]+table_down[0];
		for(i=1; i<6 && flag==0; i++){
			if(table_upper[i]+table_down[i]!=tot) flag=1;
		}

		printf((flag==0)?"SI\n":"NO\n");
	}
	return 0;
}