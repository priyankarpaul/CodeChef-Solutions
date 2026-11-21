// Problem: MAELM
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/adhoc-implementation/ADHOC01/problems/MAELM
// Solved on: 2026-11-21T01:10:08.082Z

/*Author SungJinWoo18*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;


void solve(){

    ll n,m;
    cin>>n>>m;

    vector<ll> brr(m*m);
    vector<ll> arr(n*n);

    for(int i=0;i<n*n;i++) cin>>arr[i];
    for(int i=0;i<m*m;i++) cin>>brr[i];

    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());

    ll i=0;
    ll j=0;

    while(i<n*n&&j<m*m){
         if(arr[i]==brr[j]) j++;
         i++;
    }

    if(j==m*m) cout<<"TRUE\n";
    else cout<<"False\n";
        
    

    


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