/*
	Solution for the problem 141 of aceptaelreto.com

	- Parantesis balanceados - 

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

int main(int argc, char const *argv[])
{
	int i, j, len, flag;
	char sentence[10001], symbols[10001], aux;
	while(scanf("%[^\n]", sentence)!=EOF){
		scanf("%c", &aux);
		len = strlen(sentence);
		flag = 0;
		j = -1;
		for(i=0; i<len && flag==0; i++){
			if(sentence[i]=='('){
				j++;
				symbols[j] = '(';	
			}
			else if (sentence[i]==')'){
				if (symbols[j] == '('){
					j--;
				}else{
					flag=1;
				}
			}
			else if (sentence[i]=='{'){
				j++;
				symbols[j] = '{';
			}
			else if (sentence[i]=='}'){
				if (symbols[j] == '{'){
					j--;
				}else{
					flag=1;
				}
			}
			else if (sentence[i]=='['){
				j++;
				symbols[j] = '[';
			}
			else if (sentence[i]==']'){
				if (symbols[j] == '['){
					j--;
				}else{
					flag=1;
				}
			}
		}
		printf((flag==0 && j==-1)? "YES\n":"NO\n");
	}
	return 0;
}