#include<bits/stdc++.h>
using namespace std;

int main(){
    const int MAX = 1e5+1;
    int qtd_ilha, qtd_inter;
    vector<int>ilha[MAX];
    cin >> qtd_ilha >> qtd_inter;


    int tipo, cid1, cid2, ver=0;
    for(int i=0; i<qtd_inter; i++){
        cin >> tipo >> cid1 >> cid2;
        if(tipo == 0){
            if(ilha[cid1].size() <= ilha[cid2].size()){
                for(int j=0; j<ilha[cid1].size(); j++){
                    if(cid2 == ilha[cid1][j]){
                        cout << 1 << endl;
                        ver++;
                        break;
                    }
                }
                if(ver == 0){
                    cout << 0 << endl;
                }
                ver = 0;

            } else if(ilha[cid2].size() < ilha[cid1].size()){
                for(int j=0; j<ilha[cid2].size(); j++){
                    if(cid1 == ilha[cid2][j]){
                        cout << 1 << endl;
                        ver++;
                        break;
                    }
                }
                if(ver == 0){
                    cout << 0 << endl;
                }
                ver = 0;
            }

        } else if(tipo == 1){
            ilha[cid1].push_back(cid2);
            ilha[cid2].push_back(cid1);
        }
    }
    return 0;
}
//link do exercicio: https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/ta-ligado
