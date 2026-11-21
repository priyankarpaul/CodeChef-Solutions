// Problem: COMPRESSVD
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/COMPRESSVD
// Solved on: 2026-11-21T01:19:23.626Z

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

        if(n==1){
            cout<<1<<"\n";
            return;
        }

        ll count=0;

        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]) count++;
        }

        cout<<n-count<<"\n";


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