#include<bits/stdc++.h>
using namespace std;

//o numero de selos não pode ser um numero primo e nem 1
bool naoPrimoOu1(long long n){
	for(int i=2; i<=n/i; i++){
		if(n%i==0){
			return true;
		}
	}
	return false;
}

int main(){
	long long n;
	cin >> n;
	if(naoPrimoOu1(n)) cout << "S" << endl;
	else cout << "N" << endl;
	return 0;
}
