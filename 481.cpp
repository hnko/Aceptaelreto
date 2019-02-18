/*AC*/
#include <iostream>
using namespace std;

char letters[] = {'0', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
int a, b;
int main(){
	while((cin >> a >> b) and (a and b)){
		printf("%c%d\n", letters[a], b);

	}
	return 0;
}