#include <iostream>
#include <string>
#include <cmath>
#include <vector>
 
void solve() {
    int n;
    std::cin >> n;

    std::vector<int> p(n+1), visited(n+1, 0), color(n+1, 0), result(n+1, 0);
    for (int i = 1; i <= n; i++) std::cin >> p[i];

    std::string s;
    std::cin >> s;

    for (int i = 1; i <= n; i++) {
        if (visited[i] != 0) continue;

        int cnt = 0;
        while (visited[i] != 0) {
            visited[i] = 1;
            if (s[i-1] == '0') cnt++;
            i = p[i];
            color[i] = 1;
        }

        while (visited[i] != 2) {
            visited[i] = 2;
            i = p[i];
            color[i] = 2;
            result[i] = cnt;
        }
    }

    for (int i = 1; i <= n; i++) std::cout << result[i] << " ";
    std::cout << "\n";
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
 
    int T;
    std::cin >> T;
    while (T--) solve();
}