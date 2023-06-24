//Link: https://atcoder.jp/contests/abc306/tasks/abc306_d
//Editorial: https://atcoder.jp/contests/abc306/editorial/6611
#include <bits/stdc++.h>
using namespace std;

const long long inf = 1e18 + 7;
const int N = 3e5;
long long dp[N + 10][2],a[N + 10],b[N + 10];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
	for (int i = 0; i <= 1; i++)
		for (int j = 0; j <= n; j++) dp[i][j] = -inf;
	dp[0][0] = 0;
	for (int i = 1; i <= n; i++) {
		dp[i][0] = max(dp[i][0],dp[i - 1][0]);
		dp[i][1] = max(dp[i][1],dp[i - 1][1]);
		if (a[i] == 0)
			dp[i][0] = max(dp[i][0],max(dp[i - 1][0],dp[i - 1][1]) + b[i]);
		else 
			dp[i][1] = max(dp[i][1],dp[i - 1][0] + b[i]);
	}
	cout << max(dp[n][0],dp[n][1]) << endl;
}	
