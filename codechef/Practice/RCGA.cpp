// Problem: RCGA
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/adhoc-implementation/ADHOC01/problems/RCGA
// Solved on: 2026-11-21T00:54:39.107Z

/*Author SungJinWoo18*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;


void solve(){

    ll a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;

    ll count=0;

    if(a1>b1) count++;
    if(a1>b2) count++;
    else if(a2>b1) count++;
    else if(a2>b2) count++;

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