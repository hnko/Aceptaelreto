/*
	Solution for the problem 180 of aceptaelreto.com

	- Triangulos - 

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
void swap(long long* a, long long* b){
	long long temp=*a;
	*a=*b;
	*b=temp;
}

int main(int argc, char const *argv[])
{
	long long t, a, b, c, i, j;
	long long tabla[3];

	scanf("%lld", &t);
	while(t--){
		scanf("%lld %lld %lld", &tabla[0], &tabla[1], &tabla[2]);
		
		/* bublesort */
		for(i=0; i<3;i++){
			for(j=0; j<2-i; j++){
				if(tabla[j]>tabla[j+1]){
					swap(&tabla[j], &tabla[j+1]);
				}
			}
		}
		/*
		a^2+b^2 > c^2 ->acutangulo
		a^2+b^2 < c^2 ->obtusangulo
		a^2+b^2 = c^2 -> rectangulo
		si a+b<=c ->imposible
		*/
		if(tabla[2]>=tabla[0]+tabla[1]){
			printf("IMPOSIBLE\n");
		}else if(tabla[2]*tabla[2] == tabla[0]*tabla[0]+ tabla[1]*tabla[1]){
			printf("RECTANGULO\n");
		}else if(tabla[2]*tabla[2] > tabla[0]*tabla[0]+ tabla[1]*tabla[1]){
			printf("OBTUSANGULO\n");
		}else{
			printf("ACUTANGULO\n");
		}
	}
	return 0;
}