#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<pair<int, string>> words;
    
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back({word.length(), word});
    }
    
    sort(words.begin(), words.end());
    
    for (const auto& [length, word] : words) {
        cout << word << '\n';
    }
    
    return 0;
}
