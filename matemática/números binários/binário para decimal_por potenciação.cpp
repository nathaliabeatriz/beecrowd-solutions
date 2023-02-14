//esse código converte um número binário em decimal utilizando potenciação
//problema: pode dar overflow se o número de dígitos do binário for muito alto

#include<bits/stdc++.h>
using namespace std;

int charParaInt(char c){
	return c - '0';
}

int resto(string bin){
	int potencia = 0, dec = 0;
	for(int i=bin.size()-1; i>=0; i--){
		dec = dec + (charParaInt(bin[i])*pow(2, potencia));
		potencia++; 
	}
	return dec;
}

int main(){
	string binario;
	cin >> binario;
	
	cout << resto(binario) << endl;
}
