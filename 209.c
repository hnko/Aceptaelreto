/*
	Solution for the problem 209 of aceptaelreto.com

	- Panico en el tunel - 

    Copyright (C) 2018 hnko helped by guillermotorreszamora1
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
#include <string.h>
#include <stdlib.h>

/* 1 found - 0 not found */
int find_telephone(int* telephones, int num_telephones, int finding){
	int i;
	for(i=0; i<num_telephones; i++){
		if(telephones[i] == finding) return 1;
	}
	return 0;
}

int find_prev(int* telephones, int num_telephones, int finding){
	int i, prev=1;
	for(i=0; i<num_telephones; i++){
		if(telephones[i] < finding) prev = telephones[i];	
	}
	return prev;
}

int find_post(int* telephones, int num_telephones, int finding, int len){
	int i, post=len;
	for(i=num_telephones-1; i>=0; i--){
		if(telephones[i] > finding) post = telephones[i];	
	}
	return post;
}

int main(int argc, char const *argv[])
{
	int len=0, i, num_telephones, cases, stopped, founded, a_b, b_c, prev, post;
	
	int telephones[502];

	while(1){
		char tunel[1000001], character;
		telephones[0] = 0; /* idea of guillermotorreszamora1*/
		/**/num_telephones++;
		for(i=0; i<1000000; i++){
			if(scanf("%c", &character) == EOF) return 0;
			if(character == '\n') break;
			if(character == 'T'){
				telephones[num_telephones] = i+1;
				num_telephones++;
			}
			len++;
		}
		if(len == 0){
			scanf("%d", &cases);
			while(cases--){
				scanf("%d", &stopped);
				printf("PENINSULA\n");
			}
			
		}else{
			len++;

			telephones[num_telephones] = len; /* idea of guillermotorreszamora1*/
			num_telephones++;

			scanf("%d", &cases);
			while(cases--){
				scanf("%d", &stopped);
				founded = find_telephone(telephones, num_telephones, stopped);

				if(founded == 0){
					prev = find_prev(telephones, num_telephones, stopped);
					post = find_post(telephones, num_telephones, stopped, num_telephones);

					a_b = abs(prev-stopped);
					b_c = abs(post-stopped);
					
					if(a_b < b_c) printf("PENINSULA\n");
					else if(a_b == b_c){
						if(abs(len-stopped) >= abs(1-stopped) && abs(0 - stopped) <= abs(stopped - len)) printf("PENINSULA\n");
						else printf("ISLAS\n");
					}
					else printf("ISLAS\n");
				}else{
					printf("AQUI\n");
				}

			}
		
			
			len = 0;
			for(i=0; i<num_telephones; i++) telephones[i] = 0; 
			num_telephones = 0;
		}
		scanf("%c", &character);

	}

	return 0;
}