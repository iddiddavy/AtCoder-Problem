//Link: https://atcoder.jp/contests/abc306/tasks/abc306_b
#include <bits/stdc++.h>
using namespace std;

long long luythua(long long x,long long y) {
	if (y == 0) return 1;
	else if (y == 1) return x;
	else {
		long long tmp = luythua(x,y / 2);
		tmp = tmp * tmp;
		if (y % 2 == 0) return tmp;
		else return tmp * x;
	}
}

int main() {
	long long ans = 0;
	for (int i = 0; i < 64; i++) {
		long long x;
		cin >> x;
		ans += luythua(2,i) * x;
	}
	cout << ans << endl;
}
