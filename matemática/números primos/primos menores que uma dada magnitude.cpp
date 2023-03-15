#include<bits/stdc++.h>
using namespace std;

bool ehPrimo(int num){
	for(int i=2; i<=num/i; i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

vector<int> primosAteN(int n){
	vector<int>primos;
	for(int i=2; i<=n; i++){
		if(ehPrimo(i)){
			primos.push_back(i);
		}
	}
	return primos;
}

int main(){
	int n;
	cin >> n;
	vector<int>primos = primosAteN(n);
	for(int i=0; i<primos.size(); i++){
		cout << primos[i];
		if(i!=primos.size()-1) cout << " ";
		else cout << endl;
	}
	return 0;
}

//link do exercício: https://neps.academy/br/course/matematica-computacional-(codcad)/lesson/primos-menores-que-uma-dada-magnitude
