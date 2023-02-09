#include <bits/stdc++.h>
 
using namespace std;

int main() {
	
	int a, b, q, r;
	
	cin >> a >> b;
	
	q = a/b;
	r = a%b;
	
	if(a<0 and b>0 and a%b!=0)
	{
		r=r+b;
		q=q-1;
	}
	
	else if(a<0 and b<0 and a%b!=0)
	{
		r = r + abs(b);
		q = q+1;
	}
	
	cout << q << " " << r << endl;
	
	
    return 0;
}
