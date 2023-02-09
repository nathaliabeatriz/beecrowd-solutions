#include <iostream>
#include <algorithm>
 
using namespace std;

int compara(int a, int b)
{
	return a>b;
}

int main() {
	
	int n, num, j=-1, k=-1;
	cin >> n;
	
	int par[n], impar[n];
	
	for(int i=0; i<n; i++)
	{
		cin >> num;
		
		if(num%2==0)
		{
			j++;
			par[j]=num;
		}
		else
		{
			k++;
			impar[k]=num;
		}
	}
	
	sort(par, par+(j+1));
	sort(impar, impar+(k+1), compara); 
	
	for(int i=0; i<j+1; i++)
	{
		cout << par[i] << endl;
	}
	
	for(int i=0; i<k+1; i++)
	{
		cout << impar[i] << endl;
	}
	return 0;
    
}
