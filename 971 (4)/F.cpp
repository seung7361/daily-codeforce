#include <iostream>
#include <vector>

#define ll long long

void solve() {
    ll n, q, l, r;
    std::cin >> n >> q;

    std::vector<ll> ps(1), a;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a.push_back(x);
        ps.push_back(ps.back() + x);
    }

    for (int i = 0; i < n; i++) {
        ps.push_back(ps.back() + a[i]);
    }

    while (q--) {
        ll l, r;
        std::cin >> l >> r;
        l--, r--;

        ll m = l / n, o = r / n;
        l %= n, r %= n;
        // first => a_m, last => a_n
        // a_m from l to n - 1 => a_0 from l + m to n + m - 1 => ps[n + m] - ps[l + m]
        // a_o from 0 to r => a_0 from o to r + o => ps[r + o + 1] - ps[o]

        ll left = ps[n + m] - ps[l + m];
        ll right = ps[r + o + 1] - ps[o];
        ll middle = ps[n] * (o - m - 1);

        std::cout << left + middle + right << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int T;
    std::cin >> T;

    while (T--) solve();
}