#include <bits/stdc++.h>
using namespace std;

long long n, m, a;
vector<long long> p, q, q1, sum, mult;
const long long mod = 998244353;

int main() {

	cin >> n >> m;

	for (int i = 0; i < n + 1; i++) {
		cin >> a;
		p.push_back(a);
	}

	for (int i = 0; i < m + 1; i++) {
		cin >> a;
		q.push_back(a);
	}

	for (int i = 0; i < max(n, m) + 1; i++) {
		long long res = 0;
		if (i < n + 1) {
			res += p[i] % mod;
		}
		res %= mod;
		if (i < m + 1) {
			res += q[i] % mod;
		}
		res += mod;
		res %= mod;
		sum.push_back(res);
	}
	long long sum_deg = sum.size() - 1;
	while (sum[sum_deg] == 0 && sum_deg > 0) {
		sum_deg--;
	}

	cout <<  sum_deg << endl;

	for (int i = 0; i <= sum_deg; i++) {
		cout << sum[i] << " ";
	}
	cout << endl;

	//cout << n + m << endl;
	for (int i = 0; i < n + m + 1; i++) {
		long long res = 0;
		for (int j = 0; j <= i; j++) {
			if (j < n + 1 && i - j < m + 1) {
				res += p[j] * q[i - j] % mod;
			}
		}
		res += mod;
		res %= mod;
		mult.push_back(res);
	}
	long long mult_deg = mult.size() - 1;
	while (mult[mult_deg] == 0 && mult_deg > 0) {
		mult_deg--;
	}

	cout <<  mult_deg << endl;
	for (int i = 0; i <= mult_deg; i++) {
		cout << mult[i] << " ";
	}
	cout << endl;

	q1.assign(1, 1);
	for (int i = 1; i < 1025; i++) {
		long long res = 0;
		for (int j = 0; j < i; j++) {
			if (i - j < m + 1) {
				res += q1[j] * q[i - j] % mod;
			}
		}
		res += mod;
		res %= mod;
		q1.push_back(-res);
	}

	for (int i = 0; i < 1000; i++) {
		long long res = 0;
		for (int j = 0; j <= i; j++) {
			if (j < n + 1 && i - j < q1.size()) {
				res += p[j] * q1[i - j] % mod;
			}
			res %= mod;
		}
		res += mod;
		res %= mod;
		cout << res << " ";
	}
	cout << endl;

	return 0;
}
