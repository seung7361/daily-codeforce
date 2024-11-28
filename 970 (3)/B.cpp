#include <iostream>
#include <string>
#include <cmath>

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n != n) {
        std::cout << "NO\n";
        return;
    }

    // first line
    for (int i = 0; i < sqrt_n; i++) {
        if (s[i] != '1') {
            std::cout << "NO\n";
            return;
        }
    }

    // middle lines
    for (int i = 1; i < sqrt_n - 1; i++) {
        // first 1
        if (s[i * sqrt_n] != '1') {
            std::cout << "NO\n";
            return;
        }

        // last 1
        if (s[(i + 1) * sqrt_n - 1] != '1') {
            std::cout << "NO\n";
            return;
        }

        // middle 0s
        for (int j = 1; j < sqrt_n - 1; j++) {
            if (s[i * sqrt_n + j] != '0') {
                std::cout << "NO\n";
                return;
            }
        }
    }

    // last line
    for (int i = 0; i < sqrt_n; i++) {
        if (s[(sqrt_n - 1) * sqrt_n + i] != '1') {
            std::cout << "NO\n";
            return;
        }
    }

    std::cout << "YES\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T;
    std::cin >> T;
    while (T--) solve();
}