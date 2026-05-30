#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string word;
    map<string, int> word_count;
    
    while (cin >> word) {
        word_count[word]++;
    }
    
    cout << "Word frequencies:\n";
    for (const auto& pair : word_count) {
        cout << pair.first << ": " << pair.second << '\n';
    }
    
    return 0;
}
