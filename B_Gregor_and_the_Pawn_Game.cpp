#include<bits/stdc++.h>

using namespace std;

int main(){

    int  t= 0;
    cin>>t;

    while(t--){

        int n = 0;

        cin>>n;

        string a[2];

        int ans = 0;

        for(int i = 0 ; i < 2; i++){

           cin>>a[i];
        }

        for(int i = 0; i < n; i++){

            if(a[1][i] == '1'){

                if(a[0][i] == '0'){
                ans++;
            }else{

                if(a[0][i-1] == '1' && (i-1) >= 0){

                    ans++;
                    a[0][i-1] = '2';
                }else if(a[0][i+1] == '1' && (i+1) <n){

                    ans++;
                    a[0][i+1] = '2';
                }
            }
            }
        }

        cout<<ans<<"\n";
    }
}