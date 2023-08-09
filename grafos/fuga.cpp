//esse grafo percorre uma matriz
#include<bits/stdc++.h>
using namespace std;

int n, m, px, py, p_finalx, p_finaly, resp=0, caminho=0;
int matriz[15][15] = {{0}};
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void dfs(int x, int y){
    if(matriz[x][y]==1) return;
    matriz[x][y] = 1; //marcar a posição como visitada
    caminho++;
    if(x==p_finalx and y==p_finaly){
        resp = max(resp, caminho);
    } else{
        for(int i=0; i<4; i++){ //para cada vizinho da posição
            if(x+dx[i]>n or x+dx[i]<=0 or y+dy[i]>m or y+dy[i]<=0) continue;
            if(matriz[x+dx[i]][y+dy[i]]==0){
                dfs(x+dx[i], y+dy[i]);
                caminho--;
                matriz[x+dx[i]][y+dy[i]] = 0;
            }
        }
    }
}

int main(){
    int a, b;
    cin >> n >> m; //largura (linhas) e comprim (colunas)
    cin >> px >> py >> p_finalx >> p_finaly;

    for(int i=2; i<=n; i+=2){
        for(int j=2; j<=m; j+=2){
            matriz[i][j] = 1;
        }
    }
    dfs(px, py);
    cout << resp << endl;

    return 0;
}

//link do exercicio: https://www.beecrowd.com.br/judge/pt/problems/view/2834
