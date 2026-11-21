// Problem: SEARCHINARR
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/SEARCHINARR
// Solved on: 2026-11-21T01:17:06.915Z

string solve(int n, int x, const vector<int>& arr) {
    
    for(int i=0;i<n;i++){
        if(arr[i]==x) return "YES\n";
    }
    return "NO";
}
