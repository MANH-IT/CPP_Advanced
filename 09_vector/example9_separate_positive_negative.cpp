#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    cout << "Positive numbers: ";
    for (int x : numbers) {
        if (x > 0) {
            cout << x << " ";
        }
    }
    cout << '\n';
    
    cout << "Negative numbers: ";
    for (int x : numbers) {
        if (x < 0) {
            cout << x << " ";
        }
    }
    cout << '\n';
    
    return 0;
}
