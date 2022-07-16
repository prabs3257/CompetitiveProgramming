#include<bits/stdc++.h>

using namespace std;

int main(){

    int  t =0;
    cin>>t;

    while(t--){

        int p = 0;
        cin>>p;

        int ansA = 0, ansB = 0;

        for(int a = 2; a < p; a++){

            int rem = p % a;

            int b = p - rem;

            if(b > a){
                ansA = a;
                ansB = b;
                break;
            }else{

                continue;
            }

            
        }

        cout<<ansA<<" "<<ansB<<"\n";
    }
}