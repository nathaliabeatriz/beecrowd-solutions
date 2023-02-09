#include<bits/stdc++.h>
using namespace std;

int main () {
    int n_casos, n_produtos, n_produtos_comprados, quant;
    string chave;
    double valor, total=0;
    cin >> n_casos;
    map<string, double>produto;
    
    for(int i=0; i<n_casos; i++){
        cin >> n_produtos;
        for(int j=0; j<n_produtos; j++){
            cin >> chave >> valor;
            produto.insert({chave, valor});
        }
        cin >> n_produtos_comprados;
        for(int j=0; j<n_produtos_comprados; j++){
            cin >> chave >> quant;
            valor = produto[chave];
            total = total + quant*valor;
        }
        printf("R$ %.2lf\n", total);
        produto.clear();
        total = 0;
    }

    return 0;
}
