#include "bits/stdc++.h"
using namespace std;

int mdc(int a, int b){
	if(b==0){
		return a;
	}
	return mdc(b, a%b);
}

int main(){
	int n, aux, mdc_var;
	cin >> n;
	vector<int>nums;
	
	for(int i=0; i<n; i++){
		cin >> aux;
		nums.push_back(aux);
	}
	
	mdc_var = nums[0];
	
	for(int i=1; i<nums.size(); i++){
		mdc_var = mdc(mdc_var, nums[i]);
	}
	
	cout << mdc_var << endl;
	
	return 0;
}

//link do exercicio: https://neps.academy/br/course/matematica-computacional-(codcad)/lesson/mdc-sequenciado
