// Problem: CS2023_STK
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/CS2023_STK
// Solved on: 2026-11-21T01:14:54.415Z

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
        
    vector<ll> om(n);
    vector<ll> addy(n);

    for(int i=0;i<n;i++) cin>>om[i];
    for(int i=0;i<n;i++) cin>>addy[i];

    ll omCount=0;
    ll omMaxi=0;

    ll addyCount=0;
    ll addyMaxi=0;

    for(int i=0;i<n;i++){
        if(om[i]==0){
            omCount=0;
        }
        else{
            omCount++;
            omMaxi=max(omCount,omMaxi);
        }
    } 
     
    for(int i=0;i<n;i++){
        if(addy[i]==0){
            addyCount=0;
        }
        else{
            addyCount++;
            addyMaxi=max(addyCount,addyMaxi);
        }
    }

    if(addyMaxi<omMaxi) cout<<"Om\n";
    else if(addyMaxi>omMaxi) cout<<"Addy"<<"\n";
    else cout<<"Draw\n";

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