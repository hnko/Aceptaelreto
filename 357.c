/*
	Solution for the problem 357 of aceptaelreto.com

	- La prueba de las cajas y las bolas - 

    Copyright (C) 2017 hnko
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
#include <math.h>
/* is the floor of the log base 2 of n */
long long count (long long n){
	if(n==1) return 1;
	else{
		if(n%2!=0) return count(n-1);
		else return 1+count(n/2);
	}
}


int main(int argc, char const *argv[])
{
	long long t;
	while(scanf("%lld", &t)!=EOF){
		printf("%lld\n",count(t));
	}
	return 0;
}


/* this is a better option
	printf("%.lf\n", floor(log(t)/log(2))+1);	
*/