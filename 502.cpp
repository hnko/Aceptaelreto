/* AC */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> arr;
int N, m;

int main(){
	while(cin >> N){
		arr.clear();

		for(int i=0; i<N; i++){
			cin >> m;
			auto it = upper_bound(arr.begin(), arr.end(), m);
			if (it == arr.end())
				arr.push_back(m);
			else
				*it = m;
		}
		printf("%d\n", arr.size());

	}
	return 0;
}