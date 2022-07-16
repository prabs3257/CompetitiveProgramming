#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0, m = 0, k = 0;
        cin>>n>>m>>k;

        int total = k;

        if(n%2 == 0){

            if(m%2 == 0){
                if((n-k) % 2 == 0){
                cout<<"YES"<<"\n";
                
            }else{

                cout<<"NO"<<"\n";
            }

            }else{

                if(k <= ((n*m)/2 - (n/2)) && k%2 ==0){

                    cout<<"YES"<<"\n";
                }else{
                    cout<<"NO"<<"\n";
                }
            }

        }else{

            if(k < (m/2)){
                cout<<"NO"<<"\n";
            }else{

                k = k - (m/2);
                n = n - 1;
                if((n-k) % 2 == 0){
                    cout<<"YES"<<"\n";
                
                }else{

                    cout<<"NO"<<"\n";
                }

            }

        }
    }
}