#include <iostream>

void solve() {
    int n;
    std::cin >> n;

    int* arr = new int[n];
    for (int i = n-1; i >= 0; i--) {
        char c;
        for (int j = 0; j < 4; j++) {
            std::cin >> c;
            if (c == '#') arr[i] = j + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    free(arr);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--) solve();
}