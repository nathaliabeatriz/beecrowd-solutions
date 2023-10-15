//Esse algoritmo é chamado bubble sort e ordena os elementos do vetor de forma consecutiva em O(n^2)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int vet[n+1];
    for(int i=0; i<n; i++){
        cin >> vet[i];
    }
    int aux;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(vet[j] > vet[j+1]){
                swap(vet[j+1], vet[j]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << vet[i] << " ";
    }
    return 0;
}
