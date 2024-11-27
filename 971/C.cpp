#include <iostream>

void solve() {
    int x, y, k;
    std::cin >> x >> y >> k;

    int dx = (x / k) + (x % k != 0);
    int dy = (y / k) + (y % k != 0);

    if (dx > dy) {
        std::cout << 2 * dy + 2 * (dx - dy) - 1 << "\n";
    } else {
        std::cout << 2 * dy << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--) solve();
}