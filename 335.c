/*
	Solution for the problem 335 of aceptaelreto.com

	- Piramides de canicas - 

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

int main(int argc, char const *argv[])
{
	long long cases, levels, sum, prev, balls, i;

	scanf("%lld", &cases);
	while(cases--){
		scanf("%lld", &levels);
		
		printf("%lld\n", (levels*(levels+1)*(levels + 2))/6);
	}
	return 0;

}

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
	long long cases, levels, sum, prev, balls, i;

	scanf("%lld", &cases);
	while(cases--){
		scanf("%lld", &levels);
		sum = prev = 0;
		for(i=0, balls=1; i<levels; i++, balls++){
			sum += prev+balls;
			prev = prev+balls;
		}
		printf("%lld\n", sum);
	}
	return 0;

}
*/