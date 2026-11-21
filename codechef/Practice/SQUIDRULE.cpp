// Problem: SQUIDRULE
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/SQUIDRULE
// Solved on: 2026-11-21T01:19:39.894Z

/*Author SungJinWoo18*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;

void solve(){
        ll n;
        cin>>n;
        
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        ll sum=0;
        ll mini=INT_MAX;

        for(int i=0;i<n;i++){
           mini=min(mini,arr[i]);
           sum+=arr[i];
        }

        cout<<sum-mini<<"\n";


}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}