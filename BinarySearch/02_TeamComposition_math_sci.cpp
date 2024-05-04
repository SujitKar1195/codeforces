#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long  a, b;
		cin >> a >> b;
		cout << min((a + b) / 4, min(a, b)) << endl;
	}


	return 0;
}