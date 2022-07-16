#include<bits/stdc++.h>

using namespace std;

int main(){

    long long t = 0;
    cin>>t;

    while(t--){

        long long n = 0, k = 0;
        cin>>n>>k;

        long long a[n];

        for(int i = 0; i < n; i++){

            cin>>a[i];
        }

        unordered_map<long long, vector<long long>> mpp;

        for(int i = 0; i < n; i++){

            mpp[a[i]].push_back(i);
        }

        int c = 1;
        int temp = 0,sol = 0;
        for(auto x : mpp){

            if(mpp[x.first].size() >= k){
                sol++;
                c=1;
                
                for(int y = 0; y < k; y++){
                    a[mpp[x.first][y]] = c;
                    c++;
                }

                for(int y = k ; y < mpp[x.first].size(); y++){
                    a[mpp[x.first][y]] = 0;
                }

                c = 1;
            }
        }

        c = 1;


        for(auto x : mpp){

           if(mpp[x.first].size() < k){

               temp += mpp[x.first].size();
            
                for(int y = 0; y < mpp[x.first].size(); y++){

                    a[mpp[x.first][y]] = c;
                    c++;

                    if(c>k){
                        c=1;
                    }
                }

                
            }
        }



        sol+=temp/k;

        unordered_map<long long, long long> ompp;


        for(int u = 0 ; u < n; u++){

            ompp[a[u]]++;

            if(ompp[a[u]]>sol){
                cout<<"0"<<" ";
            }else{
                cout<<a[u]<<" ";
            }
            
        }
        cout<<endl;



    }

}