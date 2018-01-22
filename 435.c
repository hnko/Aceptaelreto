/*
	Solution for the problem 435 of aceptaelreto.com

	- El pijote - 

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
	char digits[1001];
	
	int i, flag;
	while(scanf("%s", digits)!=EOF){
		int num[]={0,0,0,0,0,0,0,0,0,0};

		for(i=0; i<strlen(digits); i++){
			if(digits[i]==48) num[0]+=1;
			else if(digits[i]==49) num[1]+=1;
			else if(digits[i]==50) num[2]+=1;
			else if(digits[i]==51) num[3]+=1;
			else if(digits[i]==52) num[4]+=1;
			else if(digits[i]==53) num[5]+=1;
			else if(digits[i]==54) num[6]+=1;
			else if(digits[i]==55) num[7]+=1;
			else if(digits[i]==56) num[8]+=1;
			else num[9]+=1;
		}
		flag=0;
		for(i=1; i<10 && flag==0; i++){
			if(num[i-1]!=num[i])flag=1;
		}
		printf((flag==0)?"subnormal\n": "no subnormal\n");
	}
	return 0;
}