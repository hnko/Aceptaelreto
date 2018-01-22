/*
	Solution for the problem 438 of aceptaelreto.com

	- Velocidad = desplazamiento/tiempo - 

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
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{	
	char frase[1001], a;
	int i;
	while(scanf("%[^\n]", frase)!=EOF){
		scanf("%c", &a);
		int letras=0, exclamaciones=0;
		for(i=0; i<strlen(frase);i++){
			if((frase[i]>=65 && frase[i]<=90) || (frase[i]>=97 && frase[i]<=122)){
				letras++;
			}else if(frase[i]==33){
				exclamaciones++;
			}
		}
		printf((exclamaciones>letras)?"ESGRITO\n": "escrito\n");
	}

	return 0;
}