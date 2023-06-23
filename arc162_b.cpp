//Link: https://atcoder.jp/contests/arc162/tasks/arc162_b
//Editorial: https://atcoder.jp/contests/arc162/editorial/6637
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
#define fi first
#define se second
vector<pair<int,int>>res;
int a[N + 10],n;

void fix(int u,int v) {
	res.push_back({u,v});
	int b[N + 10];
	for (int i = 1; i <= n; i++) b[i] = a[i];
	int j = 0;
	for (int i = 1; i <= n; i++) 
		if (i != u && i != u + 1) {
			if (j == v) {
				j += 2;
				a[j - 1] = b[u];
				a[j] = b[u + 1];
			}
			j++;
			a[j] = b[i];
		}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	int cnt = 0;
	for (int i = 2; i <= n; i++)
		for (int j = 1; j < i; j++) 
			if (a[i] < a[j]) cnt++;
	if (cnt % 2 == 0) {
		for (int i = 1; i <= n; i++)
			for (int j = i + 1; j <= n; j++)
				if (a[j] == i) {
					if (j == n) {
						fix(n - 1,n - 3);
						j--;
					}
					fix(j,i - 1);
					break;
				}
		cout << "Yes" << endl;
		cout << res.size() << endl;
		for (auto x: res) cout << x.fi << " " << x.se << endl;
	}
	else cout << "No" << endl;
}
