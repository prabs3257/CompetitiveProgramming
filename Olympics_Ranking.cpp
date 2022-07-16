#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    
    cin>>t;

    while(t--){

        int a[6];

        for(int i = 0 ; i < 6; i++){
            cin>>a[i];
        }

        int total1 = 0;
        int total2 = 0;

        for(int i = 0 ; i < 3; i++){
            total1 += a[i];
        }
        for(int i = 3 ; i < 6; i++){
            total2 += a[i];
        }

        if(total1 > total2){
            cout<<"1"<<"\n";
        }else{
            cout<<"2"<<"\n";
        }

    }
}