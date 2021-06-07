#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		// calculate the sum of the quotient of 'c' and 'a', and 'd' and 'b'
		cout << (c / a) + (d / b) << '\n';
	}
	return 0;
}
