#include<bits/stdc++.h>

using namespace std;

int main(){

    int n = 0, k = 0;

    cin>>n>>k;

    int a[n];
    
    int ans = 0;
    

    for(int i = 0; i < n; i++){

        cin>>a[i];
    }

    if(a[0] > 0){

        if(a[k-1] <= 0){

            for(int i =0; i < (k); i++){

                if(a[i] > 0){
                    ans++;
                   
                }
            }
        }else{

             ans = k;
            
        }
        
    }else{
        ans = 0;
        
    }
    



    for(int i = k; i < n; i++){

        if(a[i] == a[k-1] && a[i] > 0){

            ans++;
        }
    }

    cout<<ans;
}