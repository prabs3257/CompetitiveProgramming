#include<bits/stdc++.h>

using namespace std;

int main(){

    int n = 0;
    cin>>n;

    int ans = 0;

    while(n--){

        map<int,int> mpp;

        int a[3];

        for(int i = 0; i < 3; i++){

            int x = 0;
            cin>>x;
            mpp[x]++;
        }

        

        if(mpp[1] >=2){
            ans++;
        }
    }

    cout<<ans;
}