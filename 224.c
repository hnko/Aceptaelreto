/*
	Solution for the problem 224 of aceptaelreto.com
	
	Idea taken from the usser guillermotorreszamora1
	
	- Los bocadillos de la hormiga reina - 

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
	int barks;/*cortezas*/
	int bits[100000]; /*trocitos*/
	int sum[100000];
	int i, flag;
	while(1){
		scanf("%d", &barks);
		if (barks==0) return 0;

		/*insert inputs */
		for(i=0; i<barks; i++){
			scanf("%d", &bits[i]);
		}

		/* sums*/
		sum[barks-1]=bits[barks-1];
		for(i=barks-2; i>=0; i--){
			sum[i] = sum[i+1] + bits[i];
		}
		/*check if exist */
		int flag=0;
		for(i=0; i<barks-1 && flag==0; i++){
			if (bits[i]==sum[i+1]) flag=1;
		}
		if (flag==1){
			printf("SI %d\n", i);
		}else{
			printf("NO\n");
		}
	}

	return 0;
}