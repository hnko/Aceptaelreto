#include <iostream>
/*WA*/
#include <cmath>

using namespace std;
int h1, h2, m1, m2, s1, s2, c, n, diff, totalseg1, totalseg2;
int hf, mf, sf, t;
int main(){
	cin >> t;
	while(t--){
		scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
		scanf("%d %d", &n, &c);
		
		//mismo dia?
		totalseg1 = h1*60*60 + m1*60 + s1;
		totalseg2 = h2*60*60 + m2*60 + s2;
		if(h2<h1 or (h2==h1 and m2 < m1) or (h2==h1 and m2==m1 and s2<s1)){
			diff = (86400-totalseg1) + totalseg2;
		}else{
			diff = totalseg2 - totalseg1;	
		}
		diff++;
		//printf("%d---\n", diff);
		//printf("t1: %d - t2: %d\n", totalseg1, totalseg2);

		diff = ((diff-1)/(n-1)) * (c-1);
		//printf("%d****\n", diff);
		totalseg1 += diff;
		
		sf = totalseg1 % 60; 
		mf = (totalseg1/60)%60;
		hf = (totalseg1/360)%24;
		

		printf("%02d:%02d:%02d\n", hf, mf, sf); 


	}

	return 0;
}