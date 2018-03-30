/*
	Solution for the problem 309 of aceptaelreto.com

	- Calculo mental - 

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
	int cases, num1, num2, out;
	char character;
	scanf("%d", &cases);
	while(cases--){
		scanf("%d %c %d", &num1, &character, &num2);
		if(character == '+' ) out = num1 + num2;
		else out = num1 - num2;
		printf("%d", out);
		BUCLE :
			scanf(" %c", &character);
			if(character == '.') goto FIN;
			else if(character == '+'){
				scanf("%d", &num1);
				out +=num1;
				printf(", %d", out);
			}
			else{
				scanf("%d", &num1);
				out -=num1;
				printf(", %d", out);
			}
			goto BUCLE;

		
		FIN :
		printf("\n");
	}
}