//Link: https://atcoder.jp/contests/arc162/tasks/arc162_a
//Editorial: https://atcoder.jp/contests/arc162/editorial/6636
#include <bits/stdc++.h>
using namespace std;

long long a[1100];
bool f[1100];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		memset(f,true,sizeof(f));
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = 1; i <= n; i++)
			for (int j = i + 1; j <= n; j++)
				if (a[j] < a[i]) f[i] = false;
		for (int i = 1; i <= n; i++)
			if (f[i]) ans++;
		cout << ans << endl;
	}
}
