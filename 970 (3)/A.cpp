#include <iostream>
#include <vector>

void solve() {
    int a, b;
    std::cin >> a >> b;

    if (a % 2 == 1) std::cout << "NO\n";
    // a is even
    else if (a % 2 == 0 && b % 2 == 0) std::cout << "YES\n";
    else { // a is even, b is odd
        if (a == 0) std::cout << "NO\n";
        else std::cout << "YES\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T;
    std::cin >> T;
    while (T--) solve();
}