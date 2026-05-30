#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int n; cin >> n;
	if (n <= 0){
		cout << "No elements" <<'\n';
		return 0;
	}
	vector<in> numbers(n);
	for (int i = 0; i < n; i++){
		cin >> numbers[i];
	}
	int max_value = numbers[0];
	for (size_t i = 1; i < numvers.size(); i++){
		if (number[i] > max_value){
			max_value = numbers[i];
		}
	}
	cout << "Maximum value: " << max_value << '\n';
    return 0;
}


