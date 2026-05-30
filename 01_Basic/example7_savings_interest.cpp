#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	long long principal;
    double annual_interest_rate;
    int months;
    
    cin >> principal >> annual_interest_rate >> months;
    
    double monthly_interest_rate = annual_interest_rate / 12.0 / 100.0;
    double interest = principal * monthly_interest_rate * months;
    long long total_amount = principal + (long long)interest;
    
    cout << "Principal: " << principal << " VND\n";
    cout << "Annual interest rate: " << annual_interest_rate << "%\n";
    cout << "Number of months: " << months << "\n";
    cout << "Interest: " << (long long)interest << " VND\n";
    cout << "Total amount: " << total_amount << " VND\n";
    return 0;
}


