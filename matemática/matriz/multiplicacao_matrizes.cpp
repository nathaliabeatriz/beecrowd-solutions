#include "bits/stdc++.h"
using namespace std;

//multiplicação de matrizes
int main(){
	int n_linhasA, n_colA, n_linhasB, n_colB;
	cout << "Digite a ordem das matrizes a serem multiplicadas:\n";
	cin >> n_linhasA >> n_colA >> n_linhasB >> n_colB;
	
	if(n_colA != n_linhasB){ //se o num de colunas de A for diferente do de linhas da matriz B, não é possível multiplicar
		cout << "Nao eh possivel fazer a multiplicacao!\n";
		return 0;
	}
	
	int matrizA[n_linhasA][n_colA], matrizB[n_linhasB][n_colB], matrizC[n_linhasA][n_colB];
	
	cout << "Digite a primeira matriz:\n";
	for(int i=0; i<n_linhasA; i++){
		for(int j=0; j<n_colA; j++){
			cin >> matrizA[i][j];
		}
	}
	
	cout << "Digite a segunda matriz:\n";
	for(int i=0; i<n_linhasB; i++){
		for(int j=0; j<n_colB; j++){
			cin >> matrizB[i][j];
		}
	}
	
	for(int i=0; i<n_linhasA; i++){ //zera os elementos da matriz C, já que ela vai acumular valores
		for(int j=0; j<n_colB; j++){
			matrizC[i][j] = 0;
		}
	}	
	
	cout << "Matriz resultado:\n";
	for(int i=0; i<n_linhasA; i++){
		for(int j=0; j<n_colB; j++){
			for(int k=0; k<n_colA; k++){ //fórmula para calcular o elemento
				matrizC[i][j] = matrizC[i][j] + matrizA[i][k]*matrizB[k][j];
			}
			cout << matrizC[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
