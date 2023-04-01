#include "bits/stdc++.h"
using namespace std;

int mdc(int a, int b){
	if(b==0){
		return a;
	}	
	return mdc(b, a%b);
}

long long int mmc(int a, int b){
	return (a/mdc(a,b)*1LL*b);
}

int main(){
	
	int num1, den1, num2, den2, divisor;
	cin >> num1 >> den1 >> num2 >> den2;
	long long int num, den;
	
	den = mmc(den1, den2);
	num = (den/den1)*num1 + (den/den2)*num2;
	
	divisor = mdc(num, den);
	if(divisor != 1){
		num = num/divisor;
		den = den/divisor;
	}
	
	cout << num << " " << den << endl;
	return 0;
}

//link do exercicio: https://neps.academy/br/course/matematica-computacional-(codcad)/lesson/soma-de-fracoes
