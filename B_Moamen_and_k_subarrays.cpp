#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0, k = 0;
        cin>>n>>k;

        int a[n];
        int b[n];
        map<int,int> mpp;

        for(int i = 0; i < n; i++){

            cin>>a[i];
            b[i] = a[i];
            
        }   

        if(n == 1){
            cout<<"Yes"<<"\n";
        }else{
            sort(b,b+n);

        for(int i = 0; i < n; i++){

            mpp[b[i]] = i+1;            
        }   

        for(int i = 0; i < n; i++){

            a[i] = mpp[a[i]];            
        }
        int x = 1;

        for(int i = 1; i < n; i++){

            if(a[i] - a[i-1] != 1){
                x++;
            }         
        }
        if(x<=k){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
        }
        

        
    }
}