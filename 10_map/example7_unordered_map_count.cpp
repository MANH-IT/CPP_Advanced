#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    unordered_map<int, int> frequency;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        frequency[x]++;
    }
    
    map<int, int> sorted_freq(frequency.begin(), frequency.end());
    
    cout << "Frequencies (sorted):\n";
    for (const auto& pair : sorted_freq) {
        cout << pair.first << ": " << pair.second << '\n';
    }
    
    return 0;
}
