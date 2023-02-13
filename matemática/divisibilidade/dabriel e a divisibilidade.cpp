#include<bits/stdc++.h>
using namespace std;

int charParaInt(char c){
	return c - '0';
}

int resto(string bin, int d){
	int potencia=0, resto=0;
	for(int i=0; i<bin.size(); i++){ 
		resto = (resto * 2 + charParaInt(bin[i]))%d; //forma de encontrar o resto com o digíto binário, já que na conversão para decimal no pior caso teria que elevar 2 a 10^5 (o que dá overflow)
	}
	return resto%d;
}

int main(){
	string binario;
	int quant_num;
	cin >> binario >> quant_num;
	vector <int> nums_divisores;
	
	for(int i=0; i<quant_num; i++){
		int num;
		cin >> num;
		if(resto(binario, num) == 0){
			nums_divisores.push_back(num);
		}
	}
	
	sort(nums_divisores.begin(), nums_divisores.end());
	
	for(int i=0; i<nums_divisores.size(); i++){
		if(i==nums_divisores.size()-1){
			cout << nums_divisores[i];
		} else{
			cout << nums_divisores[i] << " ";
		}
	}
	
	if(nums_divisores.empty()){
		cout << "Nenhum";
	}
	cout << endl;
	return 0;
}

//link do exercicio: https://www.beecrowd.com.br/judge/pt/problems/view/2946
