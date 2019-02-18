/* AC */
#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <algorithm>
#include <queue>

using namespace std;
#define MAX 20002
typedef pair<int, int> pii; 
vector<pii> adj[MAX]; /* dist[N] to INF and visited[N] to false */
int dist[MAX], src, dst, weight, pasos[MAX], level, K, C, N;
bool visited[MAX];

void dijkstra(){
	for(int i=0; i<=N; i++){
			dist[i] = INT_MAX; visited[i] = false; pasos[i] = 0;
	}
	priority_queue<pii, vector<pii>, greater<pii> > q;
	q.push(make_pair(0, src));
	dist[src] = 0;
	pasos[src] = 0;
	
	while(!q.empty()){
		int a = q.top().second; q.pop();
		if(visited[a]) continue;
		visited[a] = true;
		
		if (a == dst) return;

		for(auto u : adj[a]){
			int b = u.second, weight=u.first;
			if(dist[b] > dist[a] + weight or (dist[b] == dist[a] + weight and pasos[b] > pasos[a]+1)){
				pasos[b] = pasos[a] + 1;
				dist[b] = dist[a] + weight;
				q.push(make_pair(dist[b], b));
			}
		}
	}
}

void bfs(){
	queue<int> q;
	q.push(src);
	for(int i=0; i<=N; i++) visited[i] = false;

	visited[src] = true;
	level = 0;
	while (!q.empty()){
		int size = q.size();
		level++;
		while(size--){
			int node = q.front(); q.pop();
			for(auto neighbour : adj[node]){
				int id = neighbour.second;
				if(!visited[id]){
					visited[id] = true;
					if (id == dst) return;
					q.push(id);
				}
			}
		}
	}
}

int main(){
	while(cin >> N){
		

		cin >> C;
		for(int i=0; i<C; i++){
			cin >> src >> dst >> weight;
			adj[src].push_back(make_pair(weight, dst));
			adj[dst].push_back(make_pair(weight, src));
		}
		
		cin >> K;
		for(int i=0; i<K; i++){
			cin >> src >> dst;
			dijkstra();
			bfs();
			if(dist[dst] == INT_MAX){
				printf("SIN CAMINO\n");
			}else{
				
				printf("%d ", dist[dst]); printf((pasos[dst] == level) ? "SI\n" : "NO\n");
			}

		}
		printf("----\n");
		for(int i=0; i<=N; i++)adj[i].clear();

	}
	return 0;
}
/*
3
3
1 2 2
2 3 2
1 3 4
1
1 3

*/