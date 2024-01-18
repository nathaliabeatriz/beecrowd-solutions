#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int vet[n];
    for(int i=0; i<n; i++){
        cin >> vet[i];
    }
    sort(vet, vet+n);
    int x; 
    cin >> x;
    //utilizando a função lower_bound - encontra a pos do nº que seja no mínimo x
    auto k = lower_bound(vet, vet+n, x)-vet;
    cout << k+1 << " " << vet[k] << endl; //mostra a posição do número

    //utilizando a função upper_bound - encontra a pos do nº maior que x
    auto l = upper_bound(vet, vet+n, x)-vet;
    cout << l+1 << " " << vet[l] << endl;

    cout << l-k << endl; //retorna qauntos elementos iguais a x

    //utilizando equal_range - retorna o limite superior e inferior em um pair
    auto a = equal_range(vet, vet+n, x);
    cout << *a.first << "-" << *a.second << endl; //retorna o intervalo
    return 0;
}
