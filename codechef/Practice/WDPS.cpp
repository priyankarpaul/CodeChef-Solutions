// Problem: WDPS
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/adhoc-implementation/ADHOC01/problems/WDPS
// Solved on: 2026-11-21T01:09:33.361Z

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
    ll sum=0;
    ll temp=n;
    ll size=0;
    while(temp>0){
          ll digit=temp%10;
          size++;
          temp/=10;
    }
    ll index=size;
    while(n>0){
       ll digit=n%10;
       sum+=pow(digit,index)*index;
       n/=10;
       index--;
    }
    
    cout<<sum<<"\n";
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