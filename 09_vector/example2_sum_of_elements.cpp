#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n; 
	cin >> n; 
	vector<int> numbers(n);
	for (int i = 0; i < n; i++){
		cin >> numbers[i];
	}
	long long sum = 0; 
	for (size_t i = 0; i < number.size(); i++){
		sum += numbers[i];
	}
	cout << "Sum of elements: " << sum << "\n";
    return 0;
}


