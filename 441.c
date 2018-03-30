/*
	Solution for the problem 441 of aceptaelreto.com

	- Contar hasta el final - 

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
#include <string.h>
#define MAX 1001

char string[MAX];
char without_dot[MAX];

void delete_dot(int len){
	int i, j;
	for (i=0, j=0; i<len; i++){
		if(string[i] == '.') continue;
		without_dot[j] = string[i]; j++;
	}
	without_dot[j] = '\0';
}
void sum_one(int len){
	int i, carry;
	without_dot[len-1] = (without_dot[len-1]-'0') + 1;
	if(without_dot[len-1] == 10){
		carry = 1;
		without_dot[len-1] = 0 + '0';
	}else{
		without_dot[len-1] += '0';
		carry = 0; 
	}
	
	for(i=len-2; i>=0; i--){

		if(carry == 1){
			
			without_dot[i] = without_dot[i] - '0' + 1;
			
			if(without_dot[i] == 10){
				
				carry=1;
				without_dot[i] = 0 + '0';
			}else{
				without_dot[i] = without_dot[i] + '0';
				break;
			}

		}else{
			break;
		}
	}

}

int main(int argc, char const *argv[]){
	int len, i, write, first_dot, dot, need_one_more;

	while(scanf("%s", string) != EOF){
		/* delete '.' */
		delete_dot(strlen(string));
		len = strlen(without_dot);
		/* sum 1 */
		sum_one(len);
		
		need_one_more = without_dot[0] == 0;
		first_dot= len%3;
		int count = 0;
		if(without_dot[0] == '0'){
			printf("1");
			if (first_dot == 0 && len%3 == 0){
				first_dot=0;	
				printf(".");
				count=1;
			}
		}
		int especial = 1;
		if (len%3 == 0){
			first_dot = 3;
			especial = 0;
			count = 1;
		}

		

		write = 1;
		if(len < 3) write=0;
		
		for(i=0 , dot=1; i< len; i++){
			printf("%c", without_dot[i]);
			if(first_dot == i+1 && write && especial){
				printf(".");
				
				write = 0;
				count = 1;
				dot = 0;
			}
			if(count && dot == 3 && i!= len-1){
				printf(".");
				dot=0;
			}
			dot++;
			
		}
		printf("\n");
		string[0] = '\0';
		without_dot[0] = '\0';
	}


	return 0;
}