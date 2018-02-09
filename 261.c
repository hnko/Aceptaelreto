/* Basic Dynamic Programming */

#include <stdio.h>


int table[1001][7];

int gana(int tot, int x){
	if (tot >= 1000){ /* base case */
		return 1;
	}
	else if(table[tot][x] != -1){ /*check if the value is already calculated */
		return table[tot][x];
	}else{
		if(x == 1 || x == 6){ /* 2, 3, 4, 5 */
			table[tot][x] = !gana(tot+2, 2) || !gana(tot+3, 3) || !gana(tot+4, 4) || !gana(tot+5, 5);
			return table[tot][x];
		}else if (x == 2 || x == 5){ /* 1, 6, 3, 4 */
			table[tot][x] = !gana(tot+1, 1) || !gana(tot+3, 3) || !gana(tot+4, 4) || !gana(tot+6, 6);
			return table[tot][x];
		}else{ /* 1, 2, 5, 6*/
			table[tot][x] = !gana(tot+1, 1) || !gana(tot+2, 2) || !gana(tot+5, 5) || !gana(tot+6, 6);
			return table[tot][x];
		}
	}
}

int main(int argc, char const *argv[])
{
	int cases, i, j, tot, num;
	scanf("%d", &cases);

	/* inicialize the values of the table to -1*/
	for(i=1; i<1001; i++){
		for(j=0; j<7; j++){
			table[i][j] = -1;
		}
	}
	while(cases--){
		scanf("%d %d", &tot, &num);
		printf((gana(tot, num) == 1)? "GANA\n" : "PIERDE\n");
	}

	return 0;
}