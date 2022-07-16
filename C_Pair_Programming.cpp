#include<bits/stdc++.h>

using namespace std;

int main(){


    int t = 0;
    cin>>t;

    while(t--){

        int n = 0, m = 0, k = 0;

        cin>>k>>n>>m;
        int max = 0;

        int a[n];
        int b[m];

        int c[n+m];

        for(int p = 0; p < n; p++){
            cin>>a[p];
        }
        for(int p = 0; p < m; p++){
            cin>>b[p];
        }

        int i = 0,j = 0;

        while(i < n && j < m){

            if(a[i] < b[j]){

                c[i + j] = a[i];
                i++;
            }else{

                c[i + j] = b[j];
                j++;
            }
        }

        
        if(i<n){
            
            
            while(i < n){

                c[i+j] = a[i];
                i++;
            }
        }

        if(j<m){
            
            
            while(j < m){

                c[i+j] = b[j];
                j++;
            }
        }

        bool isCorrect = true;

        int totalLines = k;


        for(int z = 0; z < (n+m); z++){

            if(c[z] == 0){
                totalLines++;
            }

            if(c[z] > totalLines){

                isCorrect = false;
                break;
            }
            
        }


        


        if(isCorrect == false){

            cout<<"-1"<<"\n";

        }else{

             for(int z = 0; z < (n+m); z++){

                cout<<c[z]<<" ";
            }

            cout<<"\n";
        }

        


    }
}