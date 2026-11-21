// Problem: DCTUR
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/adhoc-implementation/ADHOC02/problems/DCTUR?tab=statement
// Solved on: 2026-11-21T00:55:38.549Z

/*Author SungJinWoo18*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;


void solve(){

    string s;
    cin>>s;
    ll count=0;
    ll n=s.size();
    if(n==0){
        cout<<0<<"\n";
        return;
    }
    for(int i=0;i<n;i++){
       if(s[i]>='1'&&s[i]<='5'){
          count++;
        }
        else if(s[i]=='6'){
           count;
        }
        else{
         cout<<-1<<"\n";
         return;
        }
    }

    if(s[n-1]=='6') count++;
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