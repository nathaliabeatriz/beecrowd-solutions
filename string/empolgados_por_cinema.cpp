#include"bits/stdc++.h"
using namespace std;

int main(){
	int qtd_palavras_especiais, qtd_filmes;
	string aux, filme;
	string sigla;
	vector<string>palavras_esp;
	
	cin >> qtd_palavras_especiais >> qtd_filmes;
	
	for(int i=0; i<qtd_palavras_especiais; i++){
		cin >> aux;
		for(int j=0; j<aux.size(); j++){
			aux[j] = tolower(aux[j]);
		}
		palavras_esp.push_back(aux);
	}
	
	fflush(stdin);
	aux.clear();
	
	int cont = 0, cont2=0;
	for(int i=0; i<qtd_filmes; i++){
		getline(cin, filme);
		for(int j=0; j<filme.size(); j++){
			filme[j] = tolower(filme[j]);
		}
		
		for(int j=0; j<=filme.size(); j++){
			if(filme[j] != 32 and filme[j] != 45 and filme[j] != 58 and filme[j] != '\0'){
				aux+=filme[j];
			} else if(aux.empty());
			
			else{
				for(int k=0; k<palavras_esp.size(); k++){
					if(aux == palavras_esp[k]){
						cont++;
						break;
					}
				}
				if(cont!=0){
					if(cont2==0){
						cont2++;
					} else sigla += aux[0];
				} else{
					sigla += toupper(aux[0]);
					cont2++;
				}
				aux.clear();
				cont = 0;
			}
		}
		cout << sigla << endl;
		sigla.clear();
		cont2 = 0;
	}
	
	return 0;	
}

/*esse programa cria siglas para nomes de filmes e funciona da seguinte forma:
-> o usuário entra com 2 números inteiros: a quantidade de palavras especiais (que
vêm em minúsculo na sigla) e a quantidade de nomes que ele quer que o programa crie a sigla
-> o usuário digita as palavras especiais
-> o usuário digita o nome do filme
-> é retornada a sigla*/
