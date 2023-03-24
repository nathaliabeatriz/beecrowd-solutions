#include "bits/stdc++.h"
using namespace std;

//soma de duas matrizes de mesma ordem
int main(){
	int n_linhas, n_col;
	cout << "Digite a ordem da matriz:\n";
	cin >> n_linhas >> n_col;
	int matrizA[n_linhas][n_col], matrizB[n_linhas][n_col], matrizC[n_linhas][n_col];
	
	cout << "Digite a primeira matriz:\n";
	for(int i=0; i<n_linhas; i++){
		for(int j=0; j<n_col; j++){
			cin >> matrizA[i][j];
		}
	}
	
	cout << "Digite a segunda matriz:\n";
	for(int i=0; i<n_linhas; i++){
		for(int j=0; j<n_col; j++){
			cin >> matrizB[i][j];
		}
	}
	
	cout << "Matriz resultado:\n";
	for(int i=0; i<n_linhas; i++){
		for(int j=0; j<n_col; j++){
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
			cout << matrizC[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
