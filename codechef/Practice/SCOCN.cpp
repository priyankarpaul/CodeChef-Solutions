// Problem: SCOCN
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/adhoc-implementation/ADHOC01/problems/SCOCN
// Solved on: 2026-11-21T01:09:24.656Z

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

    ll x;cin>>x;
    ll XIndex=0;

    ll xCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x) xCount++;
        if(xCount==2){
          cout<<i<<" ";
          return;
        }
    }
    if(xCount==0) cout<<-1<<"\n";
    else if(xCount==1) cout<<-2<<"\n";

}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}