#include <bits/stdc++.h>
 
using namespace std;

int matriz(int n)
{
	int aux, m[n][n];
	
	for(int i=0; i<n; i++)
	{
		aux = pow(2,i);
		for(int j=0; j<n; j++)
		{
			if(j>i)
			{
				m[i][j]=aux;
				aux=aux*2;
			}
			
			else if(j<i)
			{
				m[i][j]=aux;
				aux=aux*2;
			}
			
			else
			{
				m[i][j]=aux;
				aux=aux*2;
			}
		}
	}
	int t=1, cont=0;
	float maior;
	maior = m[n-1][n-1];
	
	while(1)
	{
		if(maior<10) break;
		
		else
		{
			cont++;
			maior= maior/10;
		}
			
	}
	
	t= t + cont;
	
    for (int i = 0 ; i < n; i++)
    {
        for (int j = 0 ; j < n; j++)
        {
        	if(t==1) printf("%1d", m[i][j]);
        	else if(t==2) printf("%2d", m[i][j]);
        	else if(t==3) printf("%3d", m[i][j]);
        	else if(t==4) printf("%4d", m[i][j]);
        	else if(t==5) printf("%5d", m[i][j]);
        	else if(t==6) printf("%6d", m[i][j]);
        	else if(t==7) printf("%7d", m[i][j]);
        	else if(t==8) printf("%8d", m[i][j]);
        	else if(t==9) printf("%9d", m[i][j]);
        	
            if (j < n - 1) printf(" ");
        }
            printf("\n");
    }
    printf("\n");
}

int main() {
 
    int ordem;
    
    while(1)
    {
    	cin >> ordem;
    	if(ordem == 0) break;
    	matriz(ordem);
	}
}
