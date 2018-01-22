/*
	Solution for the problem 439 of aceptaelreto.com

	- Rebotando en el parchis - 

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
	int t; 
	scanf("%d", &t);
	while(t--){
		int num1, num2, d=0, v=0, t=0;
		char uno, dos;
		scanf("\n%c=%d \n%c=%d", &uno, &num1, &dos, &num2);
		if(uno=='D') d=num1;
		else if(uno=='T') t=num1;
		else v=num1;

		if(dos=='D') d=num2;
		else if(dos=='T') t=num2;
		else v=num2;

		if(!v){
			v=d/t;
			printf("V=%d\n", v);
		}else if(!d){
			d=v*t;
			printf("D=%d\n", d);
		}else{
			t=d/v;
			printf("T=%d\n", t);
		}
	}

	return 0;
}