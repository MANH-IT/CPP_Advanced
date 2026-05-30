#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int a, b;
	cin >> a >> b; 
	cout << "Before swap: a = " << a << ", b = " << b << '\n';
	
	int temp = a;
	a = b; 
	b = temp;
	
	cout << "After sawp: a = " << a << ", b = " << b << '\n';
    return 0;
}


