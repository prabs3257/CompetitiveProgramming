#include<bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
    return (a > b);
}

int main(){

    int t = 0; 
    cin>>t;

    while(t--){

        int n = 0;
        cin>>n;
        int a[n];
        int sum = 0;
        bool flag = false;
        int ans = 0;

        for(int i = 0; i < n; i++){

            cin>>a[i];
            sum+=a[i];
        }

        if(n == 1){

            cout<<"0"<<"\n";
            continue;
        }
        if(sum%n != 0){
            cout<<"-1"<<"\n";
            continue;
        }

        for(int i = 0; i < (n-1); i++){

            if(a[i] == a[i+1]){
                flag = true;
            }else{
                flag = false;
                break;
            }
        }

        if(flag == true){
            cout<<"0"<<"\n";
            continue;
        }

        sort(a,a+n,comp);
        
        for(int i = 0; i < n; i++){

            if(a[i] > (sum/n)){

                ans++;
            }else{
                break;
            }
        }

        cout<<ans<<"\n";
        
    }
}