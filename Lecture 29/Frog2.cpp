#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

#define int long long
vector<int>dp(100005, -1);

int Solve(int i, vector<int>&v, int k) {
	if (i >= v.size()) {
		return 1e9;
	}

	if (v == v.size() - 1) {
		return 0;
	}

	if (dp[i] != -1) {
		return dp[i];
	}

	int ans = INT_MAX;

	for (int j = 1; j <= k; j++) {
		ans = min(ans, Solve(i + j, v, k) + abs(v[i] - v[i + j]));
	}

	return dp[i] = ans;
}


int32_t main() {

}