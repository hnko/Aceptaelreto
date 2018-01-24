/*
	Solution for the problem 284 of aceptaelreto.com

	- La tienda de la esquina - 

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
	int coins_value[8]={200, 100, 50, 20, 10, 5, 2, 1};
	int cases, cost, given, i, diff;

	scanf("%d", &cases);
	while(cases--){
		int coins_to_give[8] = {0, 0, 0, 0, 0, 0, 0, 0};
		scanf("%d %d", &cost, &given);
		if(given == cost){
			printf("%d %d %d %d %d %d %d %d\n", 0, 0, 0, 0, 0, 0, 0, 0);
		}else if(given > cost){
			diff = given - cost;
			i=0;
			while(diff>0){
				if(coins_value[i] <= diff){
					coins_to_give[i]++;
					diff -= coins_value[i];
				}else{
					i++;
				}
			}
			for(i=0; i<8; i++){
				if(i!=7){
					printf("%d ", coins_to_give[i]);	
				}else{
					printf("%d\n", coins_to_give[i]);
				}
				
			}
		}else{
			printf("DEBE %d\n", cost-given);
		}
	}

	return 0;
}