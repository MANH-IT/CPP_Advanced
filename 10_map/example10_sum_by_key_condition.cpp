#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    map<int, int> data;
    
    for (int i = 0; i < n; i++) {
        int key, value;
        cin >> key >> value;
        data[key] = value;
    }
    
    long long sum_even = 0;
    
    for (const auto& pair : data) {
        if (pair.first % 2 == 0) {
            sum_even += pair.second;
        }
    }
    
    cout << "Sum of values with even keys: " << sum_even << '\n';
    
    return 0;
}
