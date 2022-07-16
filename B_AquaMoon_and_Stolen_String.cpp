#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0, m = 0;

        cin>>n>>m;

        string a[n];
        string b[n-1];

        int c[m] = {0};
        

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }   
        for(int i = 0; i < (n-1); i++){
            cin>>b[i];
        }

        

        
        

        for(int i = 0; i < m; i++){

            for(int j = 0; j < n; j++){

               c[i] +=(int)a[j][i];
            }
        }

        


        for(int i = 0; i < m; i++){

            for(int j = 0; j < (n-1); j++){

               c[i] -=(int)b[j][i];
            }
        }
        
        

        for(int i = 0; i < m; i++){

            cout<<(char)c[i];
        }
        cout<<endl;


    }
}