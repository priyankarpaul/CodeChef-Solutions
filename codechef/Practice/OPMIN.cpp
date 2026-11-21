// Problem: OPMIN
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/OPMIN
// Solved on: 2026-11-21T01:18:47.766Z

class Solution {
public:
    int countNonMinimum(vector<int>& arr) {
        int n=arr.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(mini,arr[i]);
        }
        
        int count=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]>mini){
                arr[i]=mini;
                count++;
            }
        }
        return count;
    }
};
