#include<bits/stdc++.h>

using namespace std;

int main(){
	string expressao;
	vector<char>parenteses;
	while(cin >> expressao){
        int cont=0;
		for(int i=0; i<expressao.size(); i++){

			if(expressao[i]=='(' or expressao[i]==')'){

				parenteses.push_back(expressao[i]);
			}
		}

		for(int i=0; i<parenteses.size(); i++){
			if(parenteses[i]=='('){
                cont++;
            }
            else if(parenteses[i]==')'){
                cont--;
            }
            if(cont<0){
                break;
            }
		}
		if(cont==0){
            cout << "correct\n";
		}
		else{
            cout << "incorrect\n";
		}

		parenteses.clear();
	}
	return 0;
}
