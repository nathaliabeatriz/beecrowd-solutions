#include<bits/stdc++.h>
using namespace std;
#define MAX 210

int m[MAX][MAX], pos=0, h, l;
bool elem_visitado[MAX][MAX] = {{false}};
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int tam_area=0, menor_area=-1;

void dfs(int x, int y){
    if(elem_visitado[x][y]) return;
    elem_visitado[x][y] = true;
    tam_area++;
    for(int i=0; i<4; i++){
        if(x+dx[i]<=0 or y+dy[i]<=0 or x+dx[i]>h or y+dy[i]>l)continue;
        if(m[x+dx[i]][y+dy[i]] == m[x][y]){
            dfs(x+dx[i], y+dy[i]);
        }
    }
}

int main(){
    cin >> h >> l;

    for(int i=1; i<=h; i++){
        for(int j=1; j<=l; j++){
            cin >> m[i][j];
        }
    }

    for(int i=1; i<=h; i++){
        for(int j=1; j<=l; j++){
            if(elem_visitado[i][j]) continue;
            dfs(i, j);
            if(menor_area == -1 or tam_area < menor_area){
                menor_area = tam_area;
            }
            if(menor_area == 1){
                goto resposta_final;
            }
            tam_area = 0;
        }
    }

resposta_final:
    cout << menor_area << endl;

    return 0;
}
//link do exercicio: https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/ladrilhos
