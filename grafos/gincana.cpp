#include<bits/stdc++.h>
using namespace std;
#define MAXN 1010

vector<int>amigos[MAXN];
bool amigo_vis[MAXN] = {false};

void dfs(int x){
    if(amigo_vis[x]) return;
    amigo_vis[x] = true;

    for(auto amigo: amigos[x]){
        dfs(amigo);
    }
}

int main(){
    int n, m, a, b, times=0;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        cin >> a >> b;
        amigos[a].push_back(b);
        amigos[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        if(amigo_vis[i]) continue;
        dfs(i);
        times++;
    }

    cout << times << endl;
    return 0;
}
//link do exercicio: https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/gincana-(obi-2011)
