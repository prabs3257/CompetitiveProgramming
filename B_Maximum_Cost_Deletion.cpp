#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0,a = 0,b = 0;
        cin>>n>>a>>b;

        int c[n];
        int ans = 0;
        int  l =0;

        string s;

        cin>>s;

        if(b >= 0){

            ans = n * (a + b);
        }else{

            int numOfGrp = 1;

            int num = s[0];
            

            for(int i = 1; i < n; i++){

                if(s[i] != num){

                    numOfGrp++;
                    num = s[i];
                }
            }

            ans = (n*a) + (((numOfGrp/2)+1)*b);
        }
        cout<<ans<<"\n";

    }
}