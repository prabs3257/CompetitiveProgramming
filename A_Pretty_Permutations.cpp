#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0;
        cin>>n;

        int a[n];

        for(int i = 1; i <= n; i++){

            a[i] = i;
        }

        if(n % 2 == 0){

            for(int i = 1; i < n; i+=2){

                int temp = 0;

                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }else{

            for(int i = 1; i < (n-1); i+=2){

                int temp = 0;

                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }

            int temp = 0;

            temp = a[n-1];
            a[n-1] = a[n];
            a[n] = temp;


        }

        for(int i = 1; i <= n; i++){

            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}