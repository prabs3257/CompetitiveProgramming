#include<bits/stdc++.h>

using namespace std;

int main(){

    int n = 0;

    cin>>n;

    float fraction = 0.0;

    for(int  i = 0; i < n; i++){

        float x = 0;
        cin>>x;

        fraction += (float)(x/100);
    }

    

    cout<<(fraction/n) * 100;



}