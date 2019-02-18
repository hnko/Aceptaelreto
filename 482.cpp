/* AC */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string line;
int n, g;
int main(){
	while(getline(cin, line) and (line != ".")){
		n = g = 0;
		for(int i=0; i<line.size(); i++){
			if(line[i] == 'N') n++;
			if(line[i] == 'G') g++;
		}
		if(n%2==0 and g%2==0)
			printf("EMPAREJADOS\n");
		else if(n%2 and g%2==0)
			printf("NEGRO SOLITARIO\n");
		else if(g%2 and n%2==0)
			printf("GRIS SOLITARIO\n");
		else
			printf("PAREJA MIXTA\n");
	}

	return 0;
}