#include<bits/stdc++.h>

using namespace std;

int main(){

    string word;
    cin >> word;
    int a = word.find("AB");
    int b = word.rfind("BA");

    
    if(a == -1 || b == -1){

        cout<<"NO";
    }else{

        if(abs(a-b) > 1){
        cout<<"YES";
    }else{
        a = word.rfind("AB");
        b = word.find("BA");

        if(abs(a-b) >1){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    }
}