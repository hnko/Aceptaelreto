#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* ascii 48->0*/
int main(int argc, char const *argv[])
{
	char digits[250001];
	int cases,  sum, aux, i, j, count;
	scanf("%d", &cases);
	while(cases--){

		scanf("%d %s", &sum, digits);
		i=j=0;
		count=0;
		aux = digits[0]-48;
		
		while(i<strlen(digits) && j<strlen(digits)){
			if(aux<sum){
				j++;
				aux = aux + (digits[j]-48);
			}else if (aux==sum){
				count++;
				aux = abs(aux-(digits[i]-48));
				i++;
			}else{
				aux = abs(aux-(digits[i]-48));
				i++;
			}
		}
		printf("%d\n", count);
	}

	return 0;
}