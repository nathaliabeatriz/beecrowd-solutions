#include <bits/stdc++.h>

using namespace std;

int main() {

	long long int nc;
	long long int n;
	cin >> nc;

	for(long long int i=0; i<nc; i++)
	{
		cin >> n;
		vector<int>h;
		int aux;

		for(long long int j=0; j<n; j++)
		{
			cin >> aux;
			h.push_back(aux);
		}

		sort(h.begin(), h.end());

		for(long long int j=0; j<n; j++)
		{
			cout << h[j];
			if(j != n-1) cout << " ";
			if(j == n-1) cout << endl;
		}
	}

	return 0;

}
