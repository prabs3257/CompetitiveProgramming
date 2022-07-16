#include<bits/stdc++.h>

using namespace std;

bool fxn(int a,int b){

    if(a>b){
        return true;
    }else{
        return false;
    }
}

int main(){

    int t = 0;
    cin>>t;

    while(t--){

        int n = 0;
        cin>>n;

        string words[n];
        int ans = 0;
        char a[5] = {'a','b','c','d','e'};

        for(int i = 0;i < n; i++){
             cin>>words[i];          
        }

        for(int i = 0; i < 5; i++){

            char x = a[i];

            int value[n];

            int tempAns = 0;

            for(int j = 0; j < n; j++){

                int chosenChar = 0;
                int restChar = 0;

                for(int k = 0; k < words[j].length(); k++){

                    if(words[j][k] == x){
                        chosenChar++;
                    }else{
                        restChar++;
                    }
                }

                value[j] = (chosenChar - restChar);
            }

            sort(value, value+n,fxn);
            int total = 0;

            for(int p = 0; p < n; p++){

                if(total + value[p] > 0){
                    tempAns++;
                    total += value[p];
                }else{

                    break;
                }

            }

            if(tempAns > ans){
                ans = tempAns;
            }

        }

            cout<<ans<<"\n";
    }
}