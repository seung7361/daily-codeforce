#include <iostream>
#include <vector>

void solve() {
    long long int n, cnt = 0;
    std::cin >> n;

    std::vector<std::vector<bool> > arr(n+1, std::vector<bool>(2));
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;

        arr[x][y] = true;
    }

    // vertical straight line
    for (int i = 0; i <= n; i++) {
        if (arr[i][0] && arr[i][1]) cnt += (n - 2);
    }

    // diagonal
    for (int i = 0; i < n - 1; i++) {
        if (arr[i][0] && arr[i+1][1] && arr[i+2][0]) cnt++;
        if (arr[i][1] && arr[i+1][0] && arr[i+2][1]) cnt++;
    }

    std::cout << cnt << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--) solve();
}