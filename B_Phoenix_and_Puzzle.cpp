#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){
        int n = 0;

        cin>>n;

        int tempN = 0;

        if(n == 2){
            cout<<"YES"<<"\n";
        }else{

            if(n == 1){

                cout<<"NO"<<"\n";
                continue;
            }



            if(n%2 == 0){

                if(n%4 == 0){

                    tempN = n/4;

                    int temp = sqrt(tempN);

                    if(tempN == (temp * temp)){

                        cout<<"YES"<<"\n";
                        continue;
                    }

                }

                tempN = n/2;

                int temp = sqrt(tempN);

                if(tempN == (temp * temp)){

                    cout<<"YES"<<"\n";
                    continue;
                }

                cout<<"NO"<<"\n";



            }else{

                cout<<"NO"<<"\n";
            }


        }

       
    }
}