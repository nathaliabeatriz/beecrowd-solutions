//esse código converte um número binário em decimal sem utilizar potenciação

#include<bits/stdc++.h>
using namespace std;

int charParaInt(char c){
	return c - '0';
}

int resto(string bin){
	int dec = 0;
	for(int i = 0; i<bin.size(); i++){
		dec = dec * 2 + charParaInt(bin[i]);
	}
	return dec;
}

int main(){
	string binario;
	cin >> binario;
	
	cout << resto(binario) << endl;
	
	return 0
}
