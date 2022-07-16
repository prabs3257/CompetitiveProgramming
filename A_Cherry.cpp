#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0;
        cin>>n;

        long long ans = 0;

        long long a[n];

        for(int i = 0; i < n; i++){

            cin>>a[i];
        }

        

        for(int i = 0; i < (n-1); i++){

            ans = max(ans,a[i] * a[i+1]);
        }

        cout<<ans<<"\n";
    }
}