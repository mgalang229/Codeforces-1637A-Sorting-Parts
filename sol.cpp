#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)  {
			cin >> a[i];
		}
		vector<int> new_a = a;
		sort(new_a.begin(), new_a.end());
		bool checker = false;
		for (int i = 0; i < n; i++) {
			checker |= (new_a[i] != a[i]); // make sure that the sequence is not sorted in non-decreasing order
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
