/*
	Solution for the problem 433 of aceptaelreto.com

	- Racimo de uvas - 

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

int main(){

	long uvas, i;
	while(scanf("%ld", &uvas)&&uvas!=0){
		long sum=0;
		for(i=1; sum<uvas; i++){
			sum+=i;
		}
		printf("%ld\n",i-1);
	}

	return 0;
}