#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0;
        cin>>n;

        long long a[n+1];
        int ans = 0;

        for(int i = 1; i < (n+1); i++){

            cin>>a[i];

        }

        for(int i = 1; i < (n+1); i++){

           for(int j = a[i] - i; j < (n+1); j+=a[i]){

                if(j >= 0){

                    if((a[i] * a[j]) == (i+j) && i < j){

                        ans++;
                    }
                }
           }

        }


        cout<<ans<<"\n";

    }
}