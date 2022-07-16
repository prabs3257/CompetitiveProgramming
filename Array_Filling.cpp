#include<bits/stdc++.h>

using namespace std;


void fastIO(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool fxn(pair<int,int> a, pair<int,int> b){

    if(a.first > b.first){

        return true;
    }
    return false;
}

int main(){
    fastIO();

    int t = 0;
    cin>>t;

    while(t--){

        long long n = 0, m = 0;

        cin>>n>>m;

        long long a[n+1] = {0};
        long long ans = 0;

        vector<pair<long long,long long>> v;

        for(long long i = 0; i < m; i++){

            long long p = 0,q = 0;
            cin>>p>>q;

            v.push_back({p,q});
        }

        sort(v.begin(),v.end(), fxn);

        int rem = n;

        for(long long i = 0; i < m && rem > 0; i++){

            long long y = v[i].second;
            long long x = v[i].first;

            rem = n/y;
            ans +=  (n - (rem/y)) * x;
            
            
        }


        cout<<ans<<"\n";

    }
}