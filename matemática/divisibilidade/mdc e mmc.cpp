#include "bits/stdc++.h"
using namespace std;

//faz o mdc de dois números
int mdc(int a, int b){
	if(b==0) return a;
	return mdc(b, a%b);
}

//faz o mmc de dois números
long long mmc(int a, int b){
	return (a/mdc(a,b)*1LL*b);
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << "MDC: " << mdc(a, b) << endl;
	cout << "MMC: " << mmc(a, b) << endl;
	return 0;
}
