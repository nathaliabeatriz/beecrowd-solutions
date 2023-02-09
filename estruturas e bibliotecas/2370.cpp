#include <bits/stdc++.h>
 
using namespace std;

int compara(pair<string, int>a, pair<string, int>b)
{
	return a.second > b.second;
}

int main() {
	
	int pessoas, times;
	cin >> pessoas >> times;
	
    vector<pair<string, int> > V;
    pair<string, int> aux;
    
    for(int i=0; i<pessoas; i++)
    {
    	cin >> aux.first >> aux.second;
    	V.push_back(aux);
	}
	
	sort(V.begin(), V.end(), compara);
	
	vector<string>todostimes;
	vector<string>aux2;
	int k;
	
	
	for(int i=0; i<times; i++)
	{
		cout << "Time " << i + 1 << endl;
		
		k = i;
		for(int j=k; j<pessoas; j = j+times)
		{
			aux2.push_back(V[j].first);
		}
		
		sort(aux2.begin(), aux2.end());
		
		for(int j=0; j<aux2.size(); j++)
		{
			cout << aux2[j] << endl;
		}
		
		cout << endl;
		aux2.clear();
	}
	
    return 0;
}
