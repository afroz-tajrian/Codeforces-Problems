#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 n, m, k;
    if (!(cin >> n >> m >> k)) return 0;

    int64 lo = 0, hi = k;
    int64 ans = 0;

    while (lo <= hi) {
        int64 mid = lo + (hi - lo) / 2;
        int64 z = min(m, mid);

        if (2 * mid - z <= n) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";
    return 0;
}

