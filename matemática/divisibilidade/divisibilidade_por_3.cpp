#include<bits/stdc++.h>
using namespace std;

int charParaInt(char c){
	return c - '0';
}

int main(){
	int n_algarismos;
	string num;
	while(cin >> n_algarismos >> num){
		int soma = 0;
		for(int i=0; i<num.size(); i++){
			soma = soma + charParaInt(num[i]);
		}
		
		cout << soma;
		if(soma%3 == 0){
			cout << " sim\n";
		} else{
			cout << " nao\n";
		}
	}
	return 0;
}

//exercício: https://www.beecrowd.com.br/judge/pt/problems/view/1987
