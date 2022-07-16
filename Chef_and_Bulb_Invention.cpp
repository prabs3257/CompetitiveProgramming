#include<bits/stdc++.h>

using namespace std;


int main(){

    int t = 0;
    cin>>t;

    while(t--){

        long long n = 0, p =0, k = 0;

        cin>>n>>p>>k;
        long long days = 0;
        

        long long a = 0;

        long long v[k];

        long long rem = p%k;

        a = (n-1) - (((n-1)/k) * k);

        


        if(rem > a){

            days += (a+1) * (((n-1)/k) + 1);

            days += ((rem-1) - a) * ((n-1)/k);
        }else{

            days += rem *  (((n-1)/k) + 1);
        }


        
        

        for(int i = rem; i < n; i +=k){

            days++;
            if(i == p){
                break;
            }
        }
        

        
        cout<<days<<"\n";
    }
}