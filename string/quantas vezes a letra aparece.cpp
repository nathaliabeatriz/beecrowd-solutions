#include "bits/stdc++.h"
using namespace std;

//esse programa calcula quantas vezes uma letra (independente se maiúscula ou minúscula) aparece em uma frase
int main(){
	int cont = 0;
	string frase;
	char letra;
	
	cin >> letra;
	fflush(stdin);
	getline(cin, frase);
	
	letra = tolower(letra);
	for(int i=0; i<frase.size(); i++){
		frase[i] = tolower(frase[i]);
		if(frase[i] == letra){
			cont++;
		}
	}
	cout << cont << endl;
	return 0;
}
