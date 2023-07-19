#include<bits/stdc++.h>
using namespace std;
#define MAX 30

vector<char>adj[MAX];
vector<char>posicoes;
set<char>conexos;
bool elem_vis[MAX] = {false};

int retornaPosicao(char letra){
    for(int i=0; i<posicoes.size(); i++){
        if(posicoes[i] == letra) return i;
    }
}

void dfs(int v){
    if(elem_vis[v]) return;
    elem_vis[v] = true;
    conexos.insert(posicoes[v]);
    for(auto vizinho : adj[v]){
        dfs(retornaPosicao(vizinho));
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int v, e, componentes = 0;
        char a, b, letra=97;
        cin >> v >> e;
        for(int j=0; j<v; j++){
            posicoes.push_back(letra);
            letra++;
        }

        for(int j=0; j<e; j++){
            cin >> a >> b;
            adj[retornaPosicao(a)].push_back(b);
            adj[retornaPosicao(b)].push_back(a);
        }
        cout << "Case #" << i << ":\n";

        int ult_letra = posicoes[v-1];

        for(int j=97; j<=ult_letra; j++){
            int posicao = retornaPosicao(j);
            if(elem_vis[posicao]) continue;
            dfs(posicao);
            for(auto vertice : conexos){
                cout << vertice << ",";
            }
            cout << "\n";
            componentes++;
            conexos.clear();
        }
        cout << componentes << " connected components\n\n";

        for(int j=0; j<posicoes.size(); j++){
            adj[j].clear();
            elem_vis[j] = false;
        }
        posicoes.clear();
    }
    return 0;
}
//link do exercicio: https://www.beecrowd.com.br/judge/pt/problems/view/1082
