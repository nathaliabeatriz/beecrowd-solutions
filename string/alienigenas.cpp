#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	string aux;
	vector <string> dnas;
	
	while(cin >> n){
		if(n==0) return 0;
		int cont_esp = 1;
		for(int i=0; i<n; i++){
			cin >> aux;
			dnas.push_back(aux);
			sort(dnas[i].begin(), dnas[i].end());
		}
		
		sort(dnas.begin(), dnas.end());
		
		string dna_para_comparar;
		dna_para_comparar = dnas[0];
		for(int i=1; i<dnas.size(); i++){
			if(dnas[i] != dna_para_comparar){
				cont_esp++;
				dna_para_comparar = dnas[i];
			}
		}
		
		cout << cont_esp << endl;
		dnas.clear();
	}
	return 0;
}

//Link do exercício: https://br.spoj.com/problems/ALIENSMG/
