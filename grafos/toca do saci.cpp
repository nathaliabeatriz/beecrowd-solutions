#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
//essas listas serão usadas para verificar as posições da matriz

int main(){
    int n_salas=0, n, m, x, y;
    cin >> n >> m;
    int toca[n+1][m+1];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> toca[i][j];
            if(toca[i][j]==3){
                n_salas++;
                x = i;
                y = j;
                //guarda a posição do nó inicial (saida)
            }
        }
    }
    while(toca[x][y]!=2){
        toca[x][y] = 0;
        for(int i=0; i<4; i++){//para verificar os adjacentes ao elemento da matriz
            if(x+dx[i]<0 or x+dx[i]>=n or y+dy[i]<0 or y+dy[i]>=m) continue; //evita o acesso a uma posição inexistente na memória
            if(toca[x + dx[i]][y + dy[i]]==1 or toca[x + dx[i]][y + dy[i]]==2){
                n_salas++;
                x = x + dx[i];
                y = y + dy[i];
                //faz com que ele "ande" pelas posições
                break;
            }
        }
    }
    cout << n_salas << endl;

    return 0;
}
//link do exercicio: https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/toca-do-saci
