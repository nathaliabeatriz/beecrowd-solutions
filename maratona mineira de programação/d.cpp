#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, aux, soma_dedos=0,cont=0, pos, dedos;
    cin >> n;
    for(int i=1; i<n; i++){
        cin >> aux;
        soma_dedos = soma_dedos + aux;
    }

    for(int i=0; i<n; i++){
        if(soma_dedos+1 > cont){
            pos = i;
            cont++;
            if(i == n-1){
                i = -1;
            }
        }
    }
    cout << endl;
    for(int i=0; i<n; i++){
        if(i<pos){
            dedos = n+i-pos;
        } else{
            dedos = i-pos;
        }

        if(dedos > 20){
            dedos = -1;
        }
        cout << dedos << endl;
    }

    return 0;
}
