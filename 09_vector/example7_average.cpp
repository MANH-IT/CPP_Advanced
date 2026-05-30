#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n <= 0) {
        cout << "No elements" << '\n';
        return 0;
    }
    
    vector<double> numbers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    double sum = 0;
    for (double x : numbers) {
        sum += x;
    }
    
    double average = sum / numbers.size();
    
    cout << fixed << setprecision(3);
    cout << "Average: " << average << '\n';
    
    return 0;
}
