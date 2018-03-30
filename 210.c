/*
	Solution for the problem 210 of aceptaelreto.com

	- Primo de riesgo - 

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
#include <math.h>

int isprime(int n){
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}


int main(int argc, char const *argv[])
{
	int cases;

	scanf("%d", &cases);
	while(cases--){
		int total=0, len, i;
		char word[51];
		scanf("%s", word);
		len = strlen(word);
		for(i=0; i<len; i++){
			total += word[i];
		}
		
		if(total %2 == 0) total--;
		else total -=2;
		while(isprime(total) != 1){
			total -= 2;
		}
		printf("%d\n", total);
		

	}
	
	return 0;
}