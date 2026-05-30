#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    map<int, int> frequency;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        frequency[x]++;
    }
    
    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << '\n';
    }
    
    return 0;
}
