#include<bits/stdc++.h>
using namespace std;
 
int w[10], x[10], d;

void SubSetSum(int s, int k, int r){

    static int b = 1;
    x[k] = 1;

    if(s + w[k] == d){
        b++;
        for(int i = 0; i <= k; i++){
            if(x[i] == 1){
                cout<<w[i]<<"   ";
            }
        }
        cout<<endl;
    }else if(s+w[k]+w[k+1] <= d){
        SubSetSum(s+w[k], k+1, r-w[k]);
    }

    if((s+r-w[k] >= d) && (s+w[k+1] <= d)){
        x[k] = 0;
        SubSetSum(s,k+1,r-w[k]);
    }


}


int main(){

    int n = 0, sum = 0;
    cout<<"no of elements : "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>w[i];
        sum += w[i];
    }

    sort(w, w + n);

    cout<<"value :"<<endl;

    cin>>d;

    SubSetSum(0,0, sum);


    return 0;
}