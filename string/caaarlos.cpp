#include "bits/stdc++.h"
using namespace std;

//a quantidade de letras "a" da palavra Carlos é proporcional à intensidade
int main(){
	int intensidade;
	cin >> intensidade;
	string frase = "Carlos, que felicidade!";
	
	for(int i=0; i<frase.size(); i++){
		cout << frase[i];
		if(i==1){
			for(int j=1; j<intensidade; j++){
				cout << "a";
			}
		}
	}
	cout << endl;
	return 0;
}
