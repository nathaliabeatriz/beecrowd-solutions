#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int x0_ret1, y0_ret1, x_ret1, y_ret1;
	int x0_ret2, y0_ret2, x_ret2, y_ret2;
	int cont = 0, cont2 = 0;
	
	cin >> x0_ret1 >> y0_ret1 >> x_ret1 >> y_ret1;
	cin >> x0_ret2 >> y0_ret2 >> x_ret2 >> y_ret2;
	
	if(x0_ret1 >= x0_ret2){ //verificar qual dos dois retangulos tem maior x0
		if((x0_ret1>=x0_ret2 or x_ret1>=x_ret2) and x0_ret1<=x_ret2){
			cont++;
		}
	} else{
		if((x0_ret2>=x0_ret1 or x_ret2>=x_ret1) and x0_ret2<=x_ret1){
			cont++;
		}
	}
	
	if(y0_ret1 >= y0_ret2){ //verificar qual dos dois retangulos tem maior y0
		if((y0_ret1>=y0_ret2 or y_ret1>=x_ret2) and y0_ret1<=y_ret2){
			cont2++;
		}
	} else{
		if((y0_ret2>=y0_ret1 or y_ret2>=y_ret1) and y0_ret2<=y_ret1){
			cont2++;
		}
	}
	
	if(cont>0 and cont2>0){
		cout << "1\n";
	} else{
		cout << "0\n";
	}
	
	return 0;
}

//link do exercício no neps: https://neps.academy/br/course/matematica-computacional-(codcad)/lesson/detectando-colisoes
//link do exercício no beecrowd: https://www.beecrowd.com.br/judge/pt/problems/view/2321
