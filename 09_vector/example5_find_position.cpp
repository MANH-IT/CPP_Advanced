#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n; cin >> n; 
	vector<int> numbers(n);
	for(int i = 0; i < n; i++){
		cin >> number[i];
	}
	int target;
	cin >> target;
	int position = -1;
	for (size_t i = 0; i < number.size(); i++){
		if (numbers[i] == target){
			position = i; 
			break;
		}
	}
	if (position != -1){
		cout << "Found " << target << "at position: " << position << '\n';
	}else{
		cout << "Not found " << target << '\n'
	}
    return 0;
}


