#include <bits/stdc++.h>
 
using namespace std;

int cont=0;

struct Carne
{
	string nome;
	int data;
};

int compara(Carne a, Carne b)
{
	return a.data<b.data;
}

int main() {
	
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		Carne carne[n];
		
		for(int i=0; i<n; i++)
		{
			cin >> carne[i].nome >> carne[i].data;
		}
		
		sort(carne, carne+n, compara);
		
		for(int i=0; i<n; i++)
		{
			cout << carne[i].nome;
			if(i<n-1) cout << " ";
		}
		
		cout << endl;
	}
	
	return 0;
    
}
