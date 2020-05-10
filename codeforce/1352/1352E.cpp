#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <utility>
using namespace std;
#define FOR(i,s,n) for(int i =0;i<n;i++)
#define FORR(i,s,n) for(int i =s;i>=n;i--)
typedef long long ll;
int main( ){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> log (n);
        vector<bool> ck(n,false);
        for(auto &i : log) cin>>i;
        int ans = 0;
        FOR(i,1,n){
            int sum = log[i];
            FORR(j,i-1,0){
                sum += log[j];
                FOR(k,0,n){
                    if(sum == log[k] && !ck[k]){
                        ck[k] = true;
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<'\n'; 
    }
    
    return 0;
}