// Problem: SMSLA
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/adhoc-implementation/ADHOC01/problems/SMSLA
// Solved on: 2026-11-21T01:09:46.826Z

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
    getline(cin,s);

    ll n=s.size();
    string ans="";
    int i=0;
    while(i<n){
        if(i+5<=n&&s.substr(i,5)=="today"){
            ans+="2day";
            i+=5;
        }
        else if(i+3<=n&& s.substr(i,3)=="yes"){
            ans+="s";
            i+=3;
        }
        else if(i+3<=n&&s.substr(i,3)=="you"){
            ans+="u";
            i+=3;
        }
        else if(i+3<=n&&s.substr(i,3)=="why"){
            ans+="y";
            i+=3;
        }
        else{
            ans+=s[i];
            i++;
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