#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        set<int> st;
        map<int, int> mpp;

        for(int i = 0; i < 4; i++){

            int x = 0;
            cin>>x;

            st.insert(x);
            mpp[x]++;
        }

        if(st.size() == 3){
            cout<<"2"<<"\n";
        }else if(st.size() == 1){
            cout<<"0"<<"\n";
        }else if(st.size() == 4){
            cout<<"2"<<"\n";
        }if(st.size() == 2){
            bool done = false;
            for(auto it : mpp){

                if(it.second >2){

                    cout<<"1"<<"\n";
                    done = true;
                    break;
                }
            }

            if(done == false){
                cout<<"2"<<"\n";
            }


        }

        
       
    }
}