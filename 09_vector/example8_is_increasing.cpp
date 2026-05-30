#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n <= 1) {
        cout << "Not enough elements to check" << '\n';
        return 0;
    }
    
    vector<int> numbers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    bool is_increasing = true;
    
    for (size_t i = 0; i < numbers.size() - 1; i++) {
        if (numbers[i] >= numbers[i + 1]) {
            is_increasing = false;
            break;
        }
    }
    
    if (is_increasing) {
        cout << "Vector is strictly increasing" << '\n';
    } else {
        cout << "Vector is NOT strictly increasing" << '\n';
    }
    
    return 0;
}
