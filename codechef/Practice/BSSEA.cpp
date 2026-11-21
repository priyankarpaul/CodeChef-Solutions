// Problem: BSSEA
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/adhoc-implementation/ADHOC01/problems/BSSEA
// Solved on: 2026-11-21T00:56:22.075Z

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
    ll mini=LLONG_MAX;;
    ll maxi=0;
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
        mini=min(arr[i],mini);
        maxi=max(arr[i],maxi);
    }

    ll center=mini+maxi;
    ll miniDiff=LLONG_MAX;
    ll ans=0;

    for(int i=0;i<n;i++){
        ll diff=abs(2*arr[i]-center);
        if(diff<miniDiff||(diff==miniDiff&&arr[i]<ans)){
            miniDiff=diff;
            ans=arr[i];
        }
    }

    cout<<ans<<"\n";



    


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