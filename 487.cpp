/* AC */
#include <iostream>
#include <cmath>
using namespace std;

unsigned long long ans, m, aux;

void solve(unsigned long long n){
	if(n/3600 == 0) return;
	
	m = n/3600;
	ans += m;
	aux = n%3600 + m;
	
	solve(aux);
}

int t;
unsigned long long n;
int main(){
	cin >> t;
	while(t--){
		ans = 0;
		cin >> n;
		solve(n);
		printf("%llu\n", n+ans);
		
	}

	return 0;
}