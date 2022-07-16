#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0;
        cin>>n;
        string a;
        cin>>a;

        bool flag = true;

        map<char,int> mpp;

        if(a.length() == 1){
            cout<<"YES"<<"\n";
            continue;
        }
        mpp[a[0]]++;
        for(int i = 1; i < a.length(); i++){

            if(a[i] != a[i-1] ){

                if(mpp[a[i]] > 0){
                    flag = false;
                    break;
                }else{
                    mpp[a[i]]++;
                    continue;
                }
                
            }
        }

        if(flag == false){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
}