#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int sol = 0;
        int temp = 0;

        unordered_map<char, int> mpp;

        for(int i = 0; i < s.length(); i++){

            mpp[s[i]]++;
        }

        for(auto x : mpp){

            if(mpp[x.first] >= 2){
                sol++;
            }else if(mpp[x.first] == 1){
                temp++;
            }
        }

        sol += (int)(temp/2);

        cout<<sol<<endl;


    }

}