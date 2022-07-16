#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0;
        cin>>n;

        int a[n];

        for(int i = 0; i < n; i++){

            cin>>a[i];
        }

        multiset<int>s;

        s.insert(a[0]);

        for(int i = 1; i < n; i++){

            auto it = s.upper_bound(a[i]);

            if(it == s.end()){

                s.insert(a[i]);
            }else{

                s.erase(it);
                s.insert(a[i]);
            }

          
        }

        cout<<s.size();

        for(auto x : s){
            cout<<x;
        }
        cout<<endl;
    }
}