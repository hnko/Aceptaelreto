/*
	Solution for the problem 449 of aceptaelreto.com

	- Trim - 

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


char s[81];
int cache[81][81];
int min(int a, int b){return (a < b)? a : b;}

int trim(int i, int j){
	int a, b;
	if(i > j){
		return 0;
	}
	if(cache[i][j] != -1){
		return cache[i][j];
	}
	if(i == j){
		return cache[i][j] = 1;
	}
	if(s[i] == s[j]){
		char car = s[i];
		a=i; b=j;
		while(s[i] == car) i++;
		while(s[j] == car) j--;
		return cache[a][b] =  1 + trim(i, j);
	}else{
		a=i; b=j;
		while(s[i] == s[i+1]) i++;
		while(s[j] == s[j-1]) j--;
		return  cache[a][b] = min(1+trim(i, j-1), 1+trim(i+1, j));
	}
}

int main(int argc, char const *argv[])
{
	while(scanf("%s", s) != EOF){
		int len = strlen(s);
		int i, j;
		for(i=0; i<len; i++){
			for(j=0; j<len; j++){
				cache[i][j] = -1;
			}
		}
		printf("%d\n", trim(0, len-1));
		
	}
	return 0;
}