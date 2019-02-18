/* AC */
#include <iostream>

using namespace std;

long long mcd(long long a, long long b){
	return (b==0) ? a : mcd(b, a%b);
}

long long mcm(long long a, long long b){
	return (a*b)/mcd(a, b);
}

long long comensales, n, d, nf, df, df_prev;

int main(){
	while(cin >> comensales and comensales){
		df_prev = 1;
		nf = 0;
		for(long long i=0; i<comensales; i++){
			scanf("%lld/%lld", &n, &d);
			df = mcm(df_prev, d);
			nf = nf*df/df_prev + n*(df/d);
			df_prev = df;
		}
		printf("%lld\n", df-nf);
	}

	return 0;
}