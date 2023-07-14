//exercício resolvido utilizando bfs

#include<bits/stdc++.h>
using namespace std;
#define MAX 50100

vector<int>adj[MAX];
bool elemento_visitado[MAX];
queue<int>fila;

void bfs(int vert){
    elemento_visitado[vert] = true;
    fila.push(vert);

    while(!fila.empty()){
        vert = fila.front();
        fila.pop();

        for(auto vizinho : adj[vert]){
            if(elemento_visitado[vizinho]) continue;
            bfs(vizinho);
        }
    }
}
int main(){
    int n, m, a, b, total_familias = 0;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        elemento_visitado[i] = false;
    }

    for(int i=0; i<m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        if(elemento_visitado[i]) continue;
        total_familias++;
        bfs(i);
    }

    cout << total_familias << endl;
    return 0;
}
