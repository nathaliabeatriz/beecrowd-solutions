#include<bits/stdc++.h>
using namespace std;

int main(){
    int vet[5], x, cont = 0, ver=0;

    for(int i=1; i<=4; i++){
        cin >> vet[i];
        if(vet[i] == 2) cont++;
    }

    for(int i=1; i<=4; i++){
        if(vet[i]==2 and cont==1){
            if(i==1 or i==2){
                x = i+2;
            } else if(i==3 or i==4){
                x = i-2;
            }
        } else if(vet[i]==2 and cont==2){
            for(int j=i+1; j<=4; j++){
                if(vet[j]!=j-i){
                    ver++;
                    break;
                }
            }
            if(ver==0 and i!=1){
                for(int j=i-1; j>=1; j--){
                    if(vet[j]!=i-j){
                        ver++;
                        break;
                    }
                }
            }

            if(ver==0){
                x = i;
                break;
            }
            ver= 0;
        }
    }

    cout << x << endl;
	return 0;
}
