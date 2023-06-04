#include<iostream>
using namespace std;

int main(){
    int c1, c2, copo_bolinha=2;
    long long n;

    cin >> n;
    for(long long i=0; i<n; i++){
        cin >> c1 >> c2;
        if(c1 == copo_bolinha){
	        copo_bolinha = c2;
		} else if(c2 == copo_bolinha){
			copo_bolinha = c1;
		}
    }
    cout << copo_bolinha << "\n";
    return 0;
}
