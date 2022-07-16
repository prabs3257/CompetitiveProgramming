#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        long long n = 0;
        cin>>n;
        long long a[n];
        long long ans = 0;

        for(long long i =0; i < n; i++){

            cin>>a[i];
        }

        sort(a,a+n);

        ans = a[n-1];

        long long pre = 0;

        for(long long i = 1; i < n; i++){

            ans += pre - i*a[i];
            pre += a[i];
        }

        cout<<ans<<"\n";
    }
}