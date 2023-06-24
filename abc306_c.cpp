//Link: https://atcoder.jp/contests/abc306/tasks/abc306_c
#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
const int N = 1e5;
pair<int,int>a[N + 10];
int cnt[N + 10];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 3 * n; i++) {
		int x;
		cin >> x;
		if (cnt[x] == 1) a[x].fi = i,a[x].se = x;
		cnt[x]++;
	}
	sort(a + 1,a + n + 1);
	for (int i = 1; i <= n; i++) cout << a[i].se << " ";
	cout << endl;
}
