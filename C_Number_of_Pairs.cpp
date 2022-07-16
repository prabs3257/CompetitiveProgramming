#include<bits/stdc++.h>

using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        long long n = 0, l = 0, r = 0;
        cin>>n>>l>>r;

        long long a[n];
        long long ans = 0;

        for(long long i = 0; i < n; i++){
            cin>>a[i];
        }

        sort(a,a+n,comp);

        for(long long i = 0; i < n; i++){
            
            auto ptr1 = lower_bound(a + i + 1, a+n,l-a[i]);
            auto ptr2 = upper_bound(a+ i + 1,a+n,r-a[i]);

            ans+=ptr2-ptr1;
        }
        

        cout<<ans<<"\n";
        
    }
}