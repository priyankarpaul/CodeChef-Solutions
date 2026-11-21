// Problem: DOLL
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/DOLL
// Solved on: 2026-11-21T01:18:59.421Z

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
        ll k;cin>>k;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        ll count=0;

        for(int i=0;i<n;i++){
            if(arr[i]>k) count++;
        }
        cout<<count<<"\n";


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