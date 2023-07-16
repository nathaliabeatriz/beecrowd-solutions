#include<bits/stdc++.h>
using namespace std;
#define MAX 100050

vector<int>adj[MAX];//lista de sub-móbiles de cada peça
int qtd_sub_mobiles[MAX] = {}; //quantidade de sub-móbiles de cada peça
bool elemento_visitado[MAX] = {false};//controla quais peças já foram visitadas
int qtd_pecas_ram[MAX] = {};//quantidade de peças ramificadas de cada peça
bool resp = true; 

void dfs(int peca){
    if(elemento_visitado[peca]) return;
    qtd_pecas_ram[peca] += 1;//toda peça possui valor inicial 1, pois ela também faz parte de sua ramificação
    for(auto sub_mob : adj[peca]){
        dfs(sub_mob);
        qtd_pecas_ram[peca] += qtd_pecas_ram[sub_mob];
        //soma-se o valor inicial às suas ramificações(sub-móbiles)
        elemento_visitado[sub_mob] = true;
    }
}

int main(){
    int n, a, b;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        adj[b].push_back(a);//guarda a peça "a" no vector "b", onde ela está pendurada
        qtd_sub_mobiles[b]++; //calcula a qtd de sub-mobiles de cada peça
    }

    dfs(0);//o grafo sempre inicia no 0
    int aux;
    //percorre o grafo procurando peças com mais de uma ramificação
    for(int i=0; i<n; i++){
        if(qtd_sub_mobiles[i]>1){ 
            for(int j=0; j<adj[i].size(); j++){
                if(j==0) aux = adj[i][j];
                else{
                    if(qtd_pecas_ram[aux] != qtd_pecas_ram[adj[i][j]]){
                        resp = false;
                    }
                }
            }
        }
    }

    if(resp) cout << "bem\n";
    else cout << "mal\n";
    return 0;
}
//link do exercicio: https://www.beecrowd.com.br/judge/pt/problems/view/2323
