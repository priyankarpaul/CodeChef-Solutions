// Problem: MFRLE
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/strings-new/STRINGSP01/problems/MFRLE?tab=statement
// Solved on: 2026-11-21T00:41:05.531Z

/*Author SungJinWoo18*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
const ll MOD = 1e9+7;

const vector<ll> root={0,1,-1,-1,-1,-1,9,-1,8,6};


bool binarySearch(vector<ll>& s,ll target){
    ll n=s.size();
    ll low=0;
    ll high=n-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(s[mid]==target) return true;
        else if(s[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return false;
}

void solve(){

    string s;
    getline(cin,s);
    
    vector<ll> freq(26,0);
    for(char c:s){
        if(c>='a'&&c<='z') freq[c-'a']++;
        else if(c>='A'&&c<='Z') freq[c-'A']++;
    }
    
    ll maxFreq=0;
    char bestLetter='a';
    for(int i=0;i<26;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            bestLetter='a'+i;
        }
    }
    cout<<bestLetter <<"\n";
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