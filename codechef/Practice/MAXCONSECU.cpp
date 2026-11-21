// Problem: MAXCONSECU
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/MAXCONSECU
// Solved on: 2026-11-21T01:14:43.591Z

int findMaxConsecutiveOnes(vector<int>& nums) {
    //write code here...
    int n=nums.size();
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else count=0;
    }
    return maxi;
    
}
