#include <iostream>
#include <string>
#include <cmath>
 
void solve() {
    int l, r;
    std::cin >> l >> r;
 
    int target = l, k = 1;
    while (target <= r) {
        target += k;
        k++;
    }
 
    std::cout << k - 1 << "\n";
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
 
    int T;
    std::cin >> T;
    while (T--) solve();
}