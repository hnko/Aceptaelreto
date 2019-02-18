/* AC - binary search */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <long long int> arr;
long long int aux, ans, add, P, I, diff;

void solve(){
	ans = 0;
	for(long long int i=0; i<I; i++){
		if (arr[i] > P) break;
		diff = P - arr[i] + 1;
		
		auto it = lower_bound(arr.begin(), arr.end(), diff);
		add = (it - (arr.begin() + i)) - 1;
		if (add > 0) ans += add;

	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while((cin >> I >> P) and (I)){
		arr.clear();
		for(long long int i=0; i<I; i++){
			cin >> aux;
			arr.push_back(aux);
		}
		sort(arr.begin(), arr.end());
		solve();
		
		cout << ans << endl;
	}

	return 0;
}

