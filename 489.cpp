/* AC */
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int rooms, groups, aux, i, j;
priority_queue<int> size_room , size_group;
int main(){
	while(cin >> groups >> rooms){
		for( i=0; i<groups; i++){
			cin >> aux;
			size_group.push(-aux);
		}
		for( i=0; i<rooms; i++){
			cin >> aux;
			size_room.push(-aux);
		}
		if(groups <= rooms){
			
			while(!size_room.empty() and !size_group.empty()){
				
				if((-1*size_group.top()) <= (-1*size_room.top())){
					size_group.pop();
					size_room.pop();
				}else{
					size_room.pop();
				}
			}
			
			printf((size_group.empty())? "SI\n" : "NO\n" );
			



		}else{
			printf("NO\n");
		}
		while(!size_room.empty()) size_room.pop();
		while(!size_group.empty()) size_group.pop();
	}

	return 0;
}