#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &a, int index, int sum, vector<vector<int>> &dp)
{
	if (index == 0)
	{
		if (a[index] == sum)
			return 1;
		return 0;
	}

	if (dp[index][sum] != -1)
		return dp[index][sum];

	if (a[index] <= sum)
		return dp[index][sum] = solve(a, index - 1, sum - a[index], dp) || solve(a, index - 1, sum, dp);
	else
		return dp[index][sum] = solve(a, index - 1, sum, dp);
}

bool isPossible(vector<int> &a, int n)
{
	int sum = accumulate(a.begin(), a.end(), 0);
	if (sum % 2)
		return false;
	else
	{
		vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
		return solve(a, n - 1, sum / 2, dp);
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];

		if (isPossible(a, n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}