/*AC*/
#include <iostream>
#include <algorithm>
using namespace std;
long long t, a, b, c;

int main(){
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		cout << (a/c * b + (min(a%c, b)))<< endl;
	}

	return 0;
}