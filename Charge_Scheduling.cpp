#include<bits/stdc++.h>

using namespace std;

bool fxn(pair<long long, pair<long long, long long> > a, pair<long long, pair<long long, long long> > b){

    if(a.second.first < b.second.first){

        return true;
    }else if(a.second.first == b.second.first){

        if(a.second.second < b.second.second){
            return true;
        }else{
            return false;
        }
    }
    return false;
}

int main(){

    long long t = 0;
    cin>>t;

    while(t--){

        long long n = 0;
        cin>>n;

        vector< pair<long long, pair<long long, long long> > > v;
        vector< pair<long long, pair<long long, long long> > > ans;
        long long arr1[n];
        long long arr2[n];

        for(long long i = 0; i < n; i++){

            cin>>arr1[i];
        }
        for(long long i = 0; i < n; i++){

            cin>>arr2[i];
        }

        for(long long i = 0; i < n; i++){

            v.push_back(make_pair((i+1), make_pair(arr1[i], arr2[i])));
        }

        sort(v.begin(),v.end(),fxn);

        //cout<<v[0].first<<" "<<v[0].second.first<<" "<<v[0].second.second;
        
        //long long time = 0;

        long long l = 0, r = 0,count = 0;

        for(long long i = 0; i < n; i++){

            if(v[i].second.first > v[i].second.second){

                continue;
            }

            if(i == 0){

                r = v[i].second.first;
                ans.push_back(make_pair(v[i].first, make_pair(l, r)));
                l = r;
                count++;
                continue;

            }

            if((l + v[i].second.first) <= v[i].second.second){

                r = v[i].second.first + l;
                ans.push_back(make_pair(v[i].first, make_pair(l,r)));
                l = r;
                count++;
            }

          

        }
        
        cout<<count<<"\n";

        for(long long i = 0; i < ans.size(); i++){

            cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<"\n";
        }


    }
}