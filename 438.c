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