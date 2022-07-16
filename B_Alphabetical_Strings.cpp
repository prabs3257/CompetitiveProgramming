#include<bits/stdc++.h>

using namespace std;

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        string a;
        char x = 'b';
        cin>>a;
        int start = -1, end = -1;
        bool isIt = true;

        for(int i = 0; i < a.length(); i++){

            if(a[i] == 'a'){

                start = i;
                end = i;
            }
        }

        if(start == -1){
            cout<<"NO"<<"\n";
            continue;
        }

        for(int i = 0; i < a.length()-1; i++){

            bool found = false;

            if(a[start-1] == x){

                x++;
                start--;
                found = true;
            }else if(a[end+1] == x){

                x++;
                end++;
                found = true;
            }

            if(found == false){
                isIt = false;
                break;
            }
        }

        if(isIt == true){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
        
    }
}