#include<bits/stdc++.h>

using namespace std;

void fastIO(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();

    int t = 0;
    cin>>t;

    while(t--){

        long long n = 0;
        cin>>n;
        long double a[n];

        long long max = LONG_LONG_MIN;
        long double ans = 0;

        for(long long i = 0; i< n; i++){

            cin>>a[i];
            ans+=a[i];
            if(a[i]>max)
                max=a[i];
        }

        
        

        ans-=max;
        ans = (ans / (n-1));

        ans+=max;

        cout<<setprecision(11)<<ans<<"\n";
    }
}