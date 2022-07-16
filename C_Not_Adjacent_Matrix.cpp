#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;
    while(t--){

        int n = 0;
        cin>>n;

        int a[n][n];

        if(n == 1){

            cout<<"1"<<"\n";
        }else if(n == 2){

            cout<<"-1"<<"\n";
        }else{

            
        int num = 1;
        for(int i = 0; i < n; i++){

            for(int j = ((i%2 == 0) ? 0 : 1) ; j < n; j+=2){

                a[i][j] = num;

                num++;
                
            }
        }

        if(num < pow(n,2)){

            for(int i = 0; i < n; i++){

            for(int j = (i%2 == 0) ? 1 : 0 ; j < n; j+=2){

                a[i][j] = num;

                num++;
                
            }
        }
        }

        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){

                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }




        }

        


    }

}