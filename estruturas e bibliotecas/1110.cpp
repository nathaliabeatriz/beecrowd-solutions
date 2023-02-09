#include <bits/stdc++.h>
 
using namespace std;

int main(){
	
	queue<int>pilha;
	queue<int>fila;

	int n;
	do
	{
		cin >> n;
		if(n==0) return 0;
		for(int i=1; i<=n; i++)
		{
			pilha.push(i);
		}
		
		while(pilha.size() >= 2)
		{
			fila.push(pilha.front());
			pilha.pop();
			pilha.push(pilha.front());
			pilha.pop();
			
		}
		
		n = fila.size();
		
		cout << "Discarded cards: ";
		
		for(int i=1; i<=n; i++)
		{
			cout << fila.front();
			if(i==n) cout << endl;
			else cout << ", ";
			fila.pop();
		}
		
		cout << "Remaining card: ";
		cout << pilha.front() << endl;
		
		pilha.pop();
	
	}while(n!=0);	
  return 0;
}
