/* AC - recursion */
#include <iostream>

using namespace std;
int arr[25], N, M;

int solve(int i, int curr, int grapes){
	if(grapes == 12 and curr <= N) return 1;
	if(i == M or curr > N) return 0;
	return solve(i+1, curr+arr[i], grapes+1) + solve(i+1, curr, grapes);
}

int main(){

	while((cin >> N >> M) and (N and M)){
		for(int i=0; i<M; i++){
			cin >> arr[i];
		}
		cout << solve(0, 0, 0) << endl;
	}

	return 0;
}