// Problem: USNGN
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/adhoc-implementation/ADHOC01/problems/USNGN
// Solved on: 2026-11-21T00:56:11.480Z

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
    string birth;
    cin>>birth;

    string ans="";
    for(int i=0;i<s.size();i++){
        ans.pb(tolower(s[i]));
    }
    

    cout<<ans<<birth[birth.size()-2]<<birth[birth.size()-1]<<"\n";




    


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