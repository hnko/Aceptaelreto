/*
	Solution for the problem 242 of aceptaelreto.com

	- Erasmus - 

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
	long long countries, students[100000], couples, sum, i;

	while(1){
		scanf("%d", &countries);
		if (countries == 0) return 0;

		sum = 0;
		/* save the students */
		for(i=0; i<countries; i++){
			scanf("%lld", &students[i]);
			sum += students[i]; 
		}

		couples = 0;
		/* count the couples */
		for(i=0; i<countries; i++){
			sum -= students[i]; /* take out the actual students */
			couples += sum * students[i]; /* multiple by the rest of students */
		}

		printf("%lld\n", couples);

		

	}
	return 0;
}