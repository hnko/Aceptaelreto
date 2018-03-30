/*
	Solution for the problem 220 of aceptaelreto.com

	- Pasa la calculadora - 

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
#include <iostream>

using namespace std;

int cache[32][10];

int calc(int total, int bottom){
	int result;

	if(total >= 31){
		return 1;	
	}
	if(cache[total][bottom] != -1){
		return cache[total][bottom];
	}else{
		if(bottom == 1){
			result = !calc(total+2, 2) || !calc(total+3, 3) || !calc(total+4, 4) || !calc(total+7, 7);
		}else if(bottom == 2){
			result = !calc(total+1, 1) || !calc(total+3, 3) || !calc(total+5, 5) || !calc(total+8, 8);
		}else if(bottom == 3){
			result = !calc(total+1, 1) || !calc(total+2, 2) || !calc(total+6, 6) || !calc(total+9, 9);
		}else if(bottom == 4){
			result = !calc(total+1, 1) || !calc(total+5, 5) || !calc(total+6, 6) || !calc(total+7, 7);
		}else if(bottom == 5){
			result = !calc(total+2, 2) || !calc(total+4, 4) || !calc(total+6, 6) || !calc(total+8, 8);
		}else if(bottom == 6){
			result = !calc(total+3, 3) || !calc(total+4, 4) || !calc(total+5, 5) || !calc(total+9, 9);
		}else if(bottom == 7){
			result = !calc(total+1, 1) || !calc(total+4, 4) || !calc(total+8, 8) || !calc(total+9, 9);
		}else if(bottom == 8){
			result = !calc(total+2, 2) || !calc(total+5, 5) || !calc(total+7, 7) || !calc(total+9, 9);
		}else{
			result = !calc(total+3, 3) || !calc(total+6, 6) || !calc(total+7, 7) || !calc(total+8, 8);
		}
	}
	return cache[total][bottom] = result;
}


int main(int argc, char const *argv[])
{
	int cases, total, bottom, i, j;
	scanf("%d", &cases);
	for(i=0; i<32; i++){
		for(j=0; j<10; j++){
			cache[i][j] = -1;
		}
	}
	while(cases--){
		scanf("%d %d", &total, &bottom);
		if(calc(total, bottom)){
			printf("GANA\n");
		}else{
			printf("PIERDE\n");
		}
	}
	return 0;
}