#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n <= 0) {
        cout << "Vector is empty" << '\n';
        return 0;
    }
    
    vector<int> numbers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    cout << "Reversed vector: ";
    for (int i = (int)numbers.size() - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << '\n';
    
    return 0;
}
