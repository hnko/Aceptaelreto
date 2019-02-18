
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int rooms, groups, aux, i, j, prv, k, n, ans;
vector<int> diff, m, izq;

void solve(int sum, int idx){
	ans = max(ans, sum);
	if(idx == k or idx == diff.size())return;
	solve(sum+diff[idx], idx+1);
	solve(sum, idx+1);
}

int main(){
	while(cin >> n >> k){
		
		for( i=0; i<n; i++){
			cin >> aux;
			m.push_back(aux);
		}
		prv = m[0];
		for( i=1; i<n; i++){
			diff.push_back(abs(m[i]-prv));
			prv = m[i];
		}
		k--;
		ans = 0;
		solve(0, 0);

	}
	return 0;
}