#include <bits/stdc++.h>
using namespace std;

bool compare_desc(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    map<string, int> word_count;
    
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        word_count[word]++;
    }
    
    vector<pair<string, int>> word_list(word_count.begin(), word_count.end());
    sort(word_list.begin(), word_list.end(), compare_desc);
    
    cout << "Words sorted by frequency (descending):\n";
    for (const auto& pair : word_list) {
        cout << pair.first << ": " << pair.second << '\n';
    }
    
    return 0;
}
