#include "bits/stdc++.h"
using namespace std;

//esse código verifica se uma palavra é um palíndromo ou não
int main(){
	int pos;
	string palavra, palavra_inversa;
	cin >> palavra;
	
	pos = palavra.size()-1;
	for(int i=0; i<palavra.size(); i++){
		palavra_inversa.push_back(palavra[pos]);
		pos--;
	}
	
	if(palavra == palavra_inversa){
		cout << "sim" << endl;
	} else cout << "nao\n";
	
	return 0;
}
