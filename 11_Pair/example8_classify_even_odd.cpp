#include <bits/stdc++.h>
using namespace std;

pair<vector<int>, vector<int>> classify_even_odd(const vector<int>& arr) {
    vector<int> even, odd;
    
    for (int num : arr) {
        if (num % 2 == 0) {
            even.push_back(num);
        } else {
            odd.push_back(num);
        }
    }
    
    return {even, odd};
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
    
    auto [even, odd] = classify_even_odd(arr);
    
    cout << "Even numbers: ";
    for (int num : even) {
        cout << num << " ";
    }
    cout << '\n';
    
    cout << "Odd numbers: ";
    for (int num : odd) {
        cout << num << " ";
    }
    cout << '\n';
    
    return 0;
}
