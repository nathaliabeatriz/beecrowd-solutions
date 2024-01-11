//esse código lê um vetor de números, ordena e encontra um valor x a partir de busca binária
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int vet[n];
    for(int i=0; i<n; i++){
        cin >> vet[i];
    }
    sort(vet, vet+n);
    
    int x; cin >> x;
    int a=0, b=n-1, pos; //a e b definem o intervalo a ser analisado
    while(a<=b){
        int k = (a+b)/2; //posição referência
        if(vet[k]==x){
            pos = k;
            break;
        }
        else {
            if(vet[k]>x) b = k-1; //se for maior, o limite superior diminui para metade
            else if(vet[k]<x) a = k+1; //se for menor, o limite inferior aumenta para o valor dobrado
        }
    }

    cout << pos+1 << endl;
}
