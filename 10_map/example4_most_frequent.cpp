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
    
    int most_frequent_num = -1;
    int highest_freq = 0;
    
    for (const auto& pair : frequency) {
        if (pair.second > highest_freq) {
            highest_freq = pair.second;
            most_frequent_num = pair.first;
        }
    }
    
    cout << "Most frequent number: " << most_frequent_num 
         << " (" << highest_freq << " times)\n";
    
    return 0;
}
