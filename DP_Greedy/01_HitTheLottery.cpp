#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	int deno[5] = {1, 5, 10, 20, 100};
	long long count = 0;
	for (int i = 4; i >= 0; i--){
		if(n>=deno[i]){
			int den = (n / deno[i]);
			n = n - (den * deno[i]);
			count += den;
		}
	}

	cout << count << endl;

	return 0;
}