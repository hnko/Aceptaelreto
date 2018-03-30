#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int cases, mag, ama, cia, i;
	
	scanf("%d", &cases);
	while(cases--){
		scanf("%d %d %d", &mag, &ama, &cia);
		char pixeles[100001];
		scanf("%s", pixeles);
		int l=strlen(pixeles); /* no ponerlo en el for, sino TLE*/
		for(i=0; i<l; i++){
			if(pixeles[i] == 'M') mag--;
			else if(pixeles[i] == 'A') ama--;
			else if(pixeles[i] == 'C') cia--;
			else if(pixeles[i] == 'R') {mag--; ama--;}
			else if(pixeles[i] == 'N') {mag--; ama--; cia--;}
			else if(pixeles[i] == 'V') {ama--; cia--;}
			else if(pixeles[i] == 'L') {mag--; cia--;}
			}	
		
		(mag > -1 && ama > -1 && cia > -1) ? printf("SI %d %d %d\n", mag, ama, cia) : printf("NO\n");
		
	}
	return 0;
}