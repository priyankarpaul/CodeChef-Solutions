// Problem: JOGGING
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/JOGGING
// Solved on: 2026-11-21T01:16:56.283Z

/*Author SungJinWoo18*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;

void solve(){
    
   ll n,x; 
   cin>>n>>x; 
   ll totalCal=1; 
   ll a=2; 
   ll leftKm=n-1; 
   while(leftKm){ 
      if(leftKm%2){ 
         totalCal=(totalCal*a)%MOD; 
         leftKm--;
      } 
      else{ 
         a=(a*a)%MOD; 
         leftKm/=2; 
      } 
    } 
    cout<<(x*(totalCal))%MOD<<"\n";
   



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