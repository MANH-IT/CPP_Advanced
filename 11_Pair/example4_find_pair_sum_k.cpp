#include <bits/stdc++.h>
using namespace std;

pair<int, int> find_pair_sum_k(const vector<int>& arr, int k) {
    unordered_map<int, int> seen;
    
    for (size_t i = 0; i < arr.size(); i++) {
        int target = k - arr[i];
        if (seen.find(target) != seen.end()) {
            int a = target, b = arr[i];
            if (a > b) swap(a, b);
            return {a, b};
        }
        seen[arr[i]] = i;
    }
    
    return {INT_MAX, INT_MAX};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int k;
    cin >> k;
    
    auto [a, b] = find_pair_sum_k(arr, k);
    
    if (a != INT_MAX) {
        cout << "Pair with sum " << k << ": (" << a << ", " << b << ")\n";
    } else {
        cout << "No pair found with sum " << k << '\n';
    }
    
    return 0;
}
