#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0;
        int ans = 0;

        cin>>n;

        for(int c = 1; c <= n; c++){
        
            for(int b = c; b <= n; b += c){

                for(int a = c; a <= n; a +=b){

                    if((a%b) == c && (b%c) == 0){
                        ans++;
                    }

                }
            }
            
        }

        cout<<ans<<"\n";
    }
}