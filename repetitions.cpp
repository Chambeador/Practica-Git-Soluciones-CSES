#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int max_count = 1; 
    int current = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i-1]) {
            current++;
            max_count = max(max_count, current);
        } else {
            current = 1;
        }
    }

    cout << max_count << '\n';
}

int main() {
    solve();
    return 0;
}
