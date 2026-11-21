// Problem: CNNBS
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/adhoc-implementation/ADHOC02/problems/CNNBS
// Solved on: 2026-11-21T00:54:51.851Z

/*Author SungJinWoo18*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;

const vector<ll> root={0,1,-1,-1,-1,-1,9,-1,8,6};

bool isValid(ll n){
     ll temp=n;
     ll count=0;
     while(temp>0){
        ll digit=temp%10;
        if(root[digit]==-1) return false;
        count=count*10+root[digit];
        temp/=10;
     }
     return count!=n;

}

void solve(){

    ll n;
    cin>>n;

    ll count=0;

    for(int i=1;i<=n;i++){
        if(isValid(i)) count++;
    }
    
    cout<<count<<"\n";
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