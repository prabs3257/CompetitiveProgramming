#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        long long n = 0, a = 0, b = 0;
        cin>>n>>a>>b;
        bool found = false;

        if(a == 1){

            if((n-1) % b == 0){

                cout<<"Yes"<<"\n";
            }else{
                cout<<"No"<<"\n";
            }
            continue;
        }

            long long s = 1;
           while(s <= n){

               if((n-s) % b == 0){
                   found = true;
                   break;
               }

               s *= a;
           }

           if(found == true){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
        

        
        

    }
}