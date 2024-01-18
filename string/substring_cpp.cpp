//algumas propriedades de substrings em c++
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "hello";
    string b = a.substr(1, 3); //substring que começa na pos 1 e termina na pos 3
    cout << b << endl;
    cout << a.find("ello") << endl; //encontra a pos do primeiro caracter de determinada substring
    return 0;
}
