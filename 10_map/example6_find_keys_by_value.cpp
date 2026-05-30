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
    
    int target_score;
    cin >> target_score;
    
    vector<string> result;
    
    for (const auto& pair : student_scores) {
        if (pair.second == target_score) {
            result.push_back(pair.first);
        }
    }
    
    cout << "Students with score " << target_score << ": ";
    for (const string& name : result) {
        cout << name << " ";
    }
    cout << '\n';
    
    return 0;
}
