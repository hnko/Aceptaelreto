/* AC */
#include <iostream>

using namespace std;
int M[10001], ans, prv, aux, curr, intervalos, rango, t;

int main(){

	cin >> t;
	while(t--){
		cin >> intervalos >> rango;
		prv = 0;
		for(int i=0; i<intervalos; i++){
			cin >> aux;
			M[i] = aux - prv;
			prv = aux;
		}
		ans = 1;
		curr = M[0];
		for(int i=1; i<intervalos; i++){
			if(curr+M[i] <= rango){
				curr += M[i];
			}else{
				ans++;
				curr = M[i];
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}

