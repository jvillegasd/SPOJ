#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

vector<int> g[150000];
stack<int> s;
bool vist[150000];

void DFS(int v){
    vist[v] = true;
    for(int i = 0; i < g[v].size(); i++) if(!vist[g[v][i]]) DFS(g[v][i]);
    s.push(v);
}

int main(){
    int n, k, w, v, parent[150000], lst = 0;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < k; i++){
        scanf("%d", &w);
        for(int j = 0; j < w; j++) scanf("%d", &v), g[i + 1].push_back(v);
    }
    for(int i = 1; i <= n; i++) if(!vist[i]) DFS(i);
    while(!s.empty()) parent[s.top()] = lst, lst = s.top(), s.pop();
    for(int i = 1; i <= n; i++) printf("%d\n", parent[i]);
    return 0;
}