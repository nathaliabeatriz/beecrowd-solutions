//exercício resolvido utilizando dfs

#include<bits/stdc++.h>
using namespace std;
#define MAX 50100

int total_familias=0;
vector<int>elemento[MAX];
bool elemento_visitado[MAX];

void dfs(int vert){
    if(elemento_visitado[vert])return;
    elemento_visitado[vert] = true;
    for(auto vizinho: elemento[vert]){
        dfs(vizinho);
    }
}

int main(){
    int m, n, a, b;
    cin >> n >> m; //qtd de elementos e qtd de parentescos

    for(int i=1; i<=n; i++){
        elemento_visitado[i] = false;
    }

    for(int i=0; i<m; i++){
        cin >> a >> b; //parentesco entre a e b
        elemento[a].push_back(b);
        elemento[b].push_back(a);
        //adiciona um dentro da lista de vizinhos do outro
    }

    for(int i=1; i<=n; i++){
        if(elemento_visitado[i]) continue;
        dfs(i);
        total_familias++;
    }

    cout << total_familias << endl;

    return 0;
}
//link do exercicio: https://www.beecrowd.com.br/judge/pt/problems/view/2440
