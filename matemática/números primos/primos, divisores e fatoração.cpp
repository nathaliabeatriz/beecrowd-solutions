#include<bits/stdc++.h>
using namespace std;

bool ehPrimo(long long n){ // se fosse até i<n, daria cero para números menores que 10^8
	if(n==1) return false;
	for(int i=2; i<=n/i; i++){ //o i precisa ir somente até a raiz de n => n/i é obtido através da raiz
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int quantDiv(long long n){ //conta a quantidade de divisores de n
	int cont = 0;
	for(int i=1; i<=n/i; i++){
		if(n%i == 0){
			if(i*1LL*i == n){ //se a raiz de n for i, ele aumenta em 1, já que a raiz é seu próprio 'espelho'
				cont++;
			} else { //se não, ele aumenta em 2, já que para cada divisor (exceto a raiz) existe um espelho
				cont+=2;
			}
		}
	}
	return cont;
}

vector<long long> agrupaDiv(long long n){ //agrupa todos os divisores de n em um vector
	vector<long long>divisores;
	for(int i=1; i<=n/i; i++){
		if(n%i==0){
			if(i*1LL*i == n){ //se a raiz de n for i, ele armazena somente i, já que o espelho da raiz é ela mesma
				divisores.push_back(i); 
			} else{ //se não, ele armazena tanto i, quanto seu "espelho" -> n/i
				divisores.push_back(i);
				divisores.push_back(n/i);
			}
		}
	}
	return divisores;
}

vector<long long> agrupaFatores(long long n){ //agrupa todos os fatores de n
	vector<long long>fatores;
	for(int i=2; i<=n/i; i++){ //só existe no máximo um fator primo maior que a raiz de n
		while(n%i==0){ //enquanto n for divisivel por um primo
			fatores.push_back(i);
			n = n/i; //o n vai recebendo novos valores a medida que acontece a fatoração
		}
	}
	if(n!=1){ //se o n final for diferente de 1, ele é um primo e um fator
		fatores.push_back(n);
	}
	return fatores;
}

int main(){
	long long n;
	cin >> n;
	
	if(ehPrimo(n)) cout << "Numero eh primo" << endl;
	else cout << "Numero nao eh primo" << endl;
	
	cout << "Quantidade de divisores: " << quantDiv(n) << endl;
	vector<long long>divisores = agrupaDiv(n);
	sort(divisores.begin(), divisores.end());
	cout << "Divisores: ";
	for(int i=0; i<divisores.size(); i++){
		cout << divisores[i] << " ";
	}
	vector<long long>fatores = agrupaFatores(n);
	cout << endl << "Fatores: ";
	for(int i=0; i<fatores.size(); i++){
		cout << fatores[i] << " ";
	}
	
	return 0;
}
