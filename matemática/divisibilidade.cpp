#include<bits/stdc++.h>
using namespace std;

int charParaInt(char c){
	return c  - '0'; //transforma o caracter passado em inteiro
}
int resto(string n, int d){
	int base=1%d, resto=0;
	for(int i=n.size()-1; i>=0; i--){
		resto = (resto + (charParaInt(n[i])*1LL*base)%d)%d;
		base = (base*10LL)%d;//se não colocar o %d aqui a variável pode ficar muito grande
	}
	
	return resto;
}
int main(){
	string numero; //como o numero pode ser muito grande, nenhum tipo de variável inteiro pode guardar seu valor
	cin >> numero;
	
	if(resto(numero, 2) == 0){
		cout << "S" << endl;
	} else{
		cout << "N" << endl;
	}
	if(resto(numero, 3) == 0){
		cout << "S" << endl;
	} else{
		cout << "N" << endl;
	}
	if(resto(numero, 5) == 0){
		cout << "S" << endl;
	} else{
		cout << "N" << endl;
	}
	return 0;
}

//link do exercício: https://neps.academy/br/exercise/266
