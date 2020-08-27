/*
Auther : Jirayuwat Boonchan
IG : _p_pp_pp
PB : Jirayuwat Boonchan
Email : Jirayuwat12@gmail.com
*/
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <limits.h>
#include <utility>
using namespace std;
#define FOR(i,s,n) for(int i =s;i<n;i++)
#define FORR(i,s,n) for(int i =s;i>=n;i--)
typedef long long ll;
map<vector<bool>,bool> logg;

int main( ){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("i.in.txt","r",stdin);
    int n;
    cin>>n;
    vector<bool> vt(n);
    FOR(i,0,n){
        int t;
        cin>>t;
        vt[i] = t==1;
    }
    // logg[vt] = true;
    priority_queue<pair<int,vector<bool>>,vector<pair<int,vector<bool>>>,greater<pair<int,vector<bool>>>> Q;
    Q.push({0,vt});

    while(!Q.empty( )){
        vector<bool> temp = Q.top( ).second;
        int count = Q.top( ).first;
        Q.pop( );
        if(logg[temp]) continue;
        else logg[temp] = true;
        
        cout<<count<<'\t';
        FOR(i,0,n) cout<<temp[i];
        cout<<'\n';

        bool ck = true;
        FOR(j,0,n) if(!temp[j]) ck = false; 
        if(ck) {
            cout<<count;
            return 0;
        }
        FOR(i,0,n){
            FOR(j,-1,2) if(i+j>=0 && i+j<n) temp[i+j] = !temp[i+j];
            Q.push({count+1,temp});
            FOR(j,-1,2) if(i+j>=0 && i+j<n) temp[i+j] = !temp[i+j];
        }
    }
    return 0;
}
/*

*/