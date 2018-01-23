/*
	Solution for the problem 328 of aceptaelreto.com

	- La comida de los pollitos - 

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
	int i, j, flag, cases, rows, columns, chicks, chicken_coop[51][51], x, y, steps, count, circles;
	char direction;
	scanf("%d", &cases);

	while(cases--){
		scanf("%d %d %d", &rows, &columns, &chicks);
		for(i=1; i<=rows; i++){
			for(j=1; j<=columns; j++){
				chicken_coop[i][j] = 0;
			}
		}
		while(chicks--){
			scanf("%d %d %c %d", &x, &y, &direction, &steps);
			chicken_coop[x][y] += 1;
			circles = 1;
			count = 0;
			flag=0;
			while(flag==0 && steps>0){
				/* move to North */
				if(direction=='N'){
					if(count==2){
						count = 0;
						circles++;
					}
					for (i=1; i<=circles && flag==0 && steps>0; i++){
						if ((x-i) < 1){
							flag=1;
						}else{
							chicken_coop[x-i][y] += 1;
							steps--;
						}
					}
					direction = 'E';
					count++;
					x -= circles;
				}
				/* move to East */
				else if(direction == 'E'){
					if(count==2){
						count = 0;
						circles++;
					}
					for(i=1; i<=circles && flag==0 && steps>0; i++){
						if ((y+i) > columns){
							flag=1;
						}else{
							chicken_coop[x][y+i] += 1;
							steps--;
						}
					}
					count++;
					direction = 'S';
					y += circles;
				}
				/* move to South */
				else if (direction == 'S'){
					if(count==2){
						count = 0;
						circles++;
					}
					for(i=1; i<=circles && flag==0 && steps>0; i++){
						if((x+i) >rows){
							flag=1;
						}else{
							chicken_coop[x+i][y] += 1;
							steps--;
						}
					}
					count++;
					direction = 'W';
					x += circles;
				}
				/* move to West */
				else{
					if(count==2){
						count = 0;
						circles++;
					}
					for(i=1; i<=circles && flag==0 && steps>0; i++){
						if ((y-i) < 1){
							flag=1;
						}else{
							chicken_coop[x][y-i] += 1;
							steps--;
						}
					}
					count++;
					direction = 'N';
					y -= circles;	
				}
			}
			
		}
		for(i=1; i<=rows; i++){
			for(j=1; j<=columns; j++){
				if (j!=columns){
					printf("%d ", chicken_coop[i][j]);	
				}else{
					printf("%d", chicken_coop[i][j]);
				}
			}
			printf("\n");
		}
		printf("---\n");
	}

	return 0;
}