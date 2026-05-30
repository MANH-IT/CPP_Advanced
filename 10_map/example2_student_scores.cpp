#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    map<string, int> student_scores;
    
    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        student_scores[name] = score;
    }
    
    string search_name;
    cin >> search_name;
    
    auto it = student_scores.find(search_name);
    if (it != student_scores.end()) {
        cout << "Score of " << search_name << ": " << it->second << '\n';
    } else {
        cout << "Student " << search_name << " not found\n";
    }
    
    return 0;
}
