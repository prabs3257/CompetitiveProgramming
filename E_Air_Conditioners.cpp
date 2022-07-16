#include<bits/stdc++.h>

using namespace std;


int main(){

    int t = 0;
    cin>>t;

    while(t--){

        long long n = 0, k = 0;
        cin>>n>>k;

        long long temp[n];

        long long ac[k];
        long long acTemp[k];
        for(int i = 0; i < n; i++){
            temp[i] = LONG_MAX;
        }

        for(int i = 0; i < k; i++){
            cin>>ac[i];
        }
        for(int i = 0; i < k; i++){
            cin>>acTemp[i];
        }

        for(int i = 0; i < k; i++){
            
            temp[ac[i] - 1] = acTemp[i];
        }

        long long currTemp = LONG_MAX;

        for(int i = 0; i < n; i++){

            currTemp = min(currTemp+1,temp[i]);
            temp[i] = currTemp;
            

        }
         for(int i = (n-1); i >= 0; i--){

            currTemp = min(currTemp+1,temp[i]);
            temp[i] = currTemp;

        }

        for(int i = 0; i < n; i++){

            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }
}