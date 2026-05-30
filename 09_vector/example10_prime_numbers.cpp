#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    int sqrt_n = sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) return false;
    }
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n <= 0) {
        cout << "No elements" << '\n';
        return 0;
    }
    
    vector<int> numbers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    cout << "Prime numbers: ";
    for (int x : numbers) {
        if (is_prime(x)) {
            cout << x << " ";
        }
    }
    cout << '\n';
    
    return 0;
}
