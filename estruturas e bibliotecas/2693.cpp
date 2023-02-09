#include <bits/stdc++.h>
 
using namespace std;

struct Aluno
{
	string nome;
	char regiao;
	int custo;
};

int compara_aluno(Aluno a, Aluno b)
{
	if(a.custo!=b.custo)
	{
		return a.custo<b.custo;
	}
	
	else if(a.regiao!=b.regiao)
	{
		return a.regiao<b.regiao;
	}
	
	else if(a.nome!=b.nome)
	{
		return a.nome[0]<b.nome[0];
	}
	
}

int main() {
	
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		
		Aluno aluno[n];
		
		for(int i=0; i<n; i++)
		{
			cin >> aluno[i].nome >> aluno[i].regiao >> aluno[i].custo;
		}
		
		sort(aluno, aluno+n, compara_aluno);
		
		for(int i=0; i<n; i++)
		{
			cout << aluno[i].nome << endl;
		}
	
	}
	return 0;
    
}
