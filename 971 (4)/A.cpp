#include <iostream>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int N;
    std::cin >> N;
 
    for (int i = 0; i < N; i++) {
        int a, b;
        std::cin >> a >> b;
 
        int c = (a + b) / 2;
        std::cout << (c - a) + (b - c) << "\n";
    }
}