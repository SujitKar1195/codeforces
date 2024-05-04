#include <bits/stdc++.h>
using namespace std;

bool isPossible(long long n){
	long long k = sqrt(n);
	if(k *k == n) return true;
	return false;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long  n;
		cin >> n;
		vector<long long> a(n);
		for (long long i = 0; i < n;i++)
			cin >> a[i];
		long long sum = 0;
		for(auto& num : a)
			sum += num;
		
		if(isPossible(sum)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}


	return 0;
}