/* AC*/
#include <iostream>
using namespace std;
int routes[101], r, tot;

int main(){

	while(cin >> r and r){
		tot = 0;
		for(int i=0; i<r; i++){
			cin >> routes[i];
			tot += routes[i];
		}
		for(int i=0; i<r; i++){
			printf((i != r-1)? "%d ": "%d\n", tot);
			tot -= routes[i];
		}
		
	}
	return 0;
}