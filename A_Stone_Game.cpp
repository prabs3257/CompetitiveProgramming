#include<bits/stdc++.h>

using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}

int main(){

    int t = 0;

    cin>>t;

    while(t--){

        int n = 0;
        cin>>n;

        int a[n+1];
        int minEle = 1000, maxEle = 0;
        int minIndex = 0, maxIndex = 0;
        int a1 = 0, a2 = 0, a3 = 0;


        for(int i = 0; i < n; i++){

            cin>>a[i];

            if(a[i] > maxEle){
                maxEle = a[i];
                maxIndex = i;
            }

            if(a[i] < minEle){
                minEle = a[i];
                minIndex = i;
            }
        }

        a1 = max(minIndex,maxIndex) + 1;
        a2 = ((n-1) -  min(minIndex,maxIndex) + 1);
        a3 = min(minIndex,maxIndex) + 1 +  ( (n-1) -  max(minIndex,maxIndex) + 1);

        


        cout<<min({a1,a2,a3}, comp)<<"\n";

    }
}