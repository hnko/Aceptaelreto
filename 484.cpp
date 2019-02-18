/* AC */
#include <iostream>
#include <string>
using namespace std;
string line;
int i, j, p, final, ini;
int main(){
	while(getline(cin, line)){
		for(p = 0; p< line.size(); p++){
			if (line[p] == '.') break;
		}
		for(i=0; i<line.size();){
			if(line[i] != '0') break;
			else i++;
		}
		for(j=line.size()-1; j>=p; ){
			if(line[j] != '0') break;
			else j--;
		}
		ini = (i==p)?i-1 : i;
		final = (j==p)?j-1 : j;
		for(int t=ini; t<=final; t++){
				printf("%c", line[t]);
			}
			printf("\n");
	}

	return 0;
}