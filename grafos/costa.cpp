#include<bits/stdc++.h>
using namespace std;

int main(){
    int linha, col;
    char elemento;
    cin >> linha >> col;
    int matriz[linha+10][col+10];

    for(int i=1; i<=linha; i++){
        for(int j=1; j<=col; j++){
            cin >> elemento;
            if(elemento == '.'){
                matriz[i][j] = 0;
            } else if(elemento == '#'){
                matriz[i][j] = 1;
            }
        }
    }
    int costas = 0;
    for(int i=1; i<=linha; i++){
        for(int j=1; j<=col; j++){
            if(matriz[i][j] == 1){
                if(i == 1 or j == 1 or i == linha or j == col){
                    costas++;
                }else if(matriz[i-1][j] == 0 or matriz[i+1][j] == 0 or
                         matriz[i][j-1] == 0 or matriz[i][j+1] == 0){
                    costas ++;
                }
            }
        }
    }

    cout << costas << endl;
    return 0;
}
//link do exercicio: https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/costa
