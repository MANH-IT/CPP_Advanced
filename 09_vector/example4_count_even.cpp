#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n; cin >> n;
	vector<int> numbers(n);
	for (int i = 0; i < n; i++){
		cin >> numbers[i];
	}
	int even_count = 0;
	for (int x : numbers){
		if (x % 2 == 0){
			even_count++;
		}
	}
	cout << "Number of even numbers: " << even_count << '\n';
    return 0;
}


