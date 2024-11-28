#include <iostream>
#include <vector>

long long sum(long long start, long long end) {
    return (end * (end + 1) - start * (start - 1)) / 2;
}

void solve() {
    long long n, k, result = 1e18;
    std::cin >> n >> k;

    long long start = k, end = k + n - 1, mid;
    while (start < end) {
        mid = (start + end) / 2;

        long long temp = sum(k, mid) - sum(mid + 1, k + n - 1);
        result = std::min(result, std::abs(temp));

        if (temp < 0) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    std::cout << result << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--) solve();
}