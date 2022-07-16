
#include<bits/stdc++.h>

using namespace std;


pair<int,int> a;
pair<int,int> b;
pair<int,int> f;





int main(){

    int t = 0;
    cin>>t;

    while(t--){
        
        int ans = 0;

        int x=0,y=0;

        cin>>x>>y;  
        a.first = x;
        a.second = y;
        cin>>x>>y;  
        b.first = x;
        b.second = y;
        cin>>x>>y;
        f.first = x;
        f.second = y;

        ans = abs(a.first-b.first) + abs(a.second-b.second);

        if((a.first == b.first && b.first == f.first) || (a.second == b.second && b.second== f.second)){


            if((a.first<f.first && f.first<b.first) ||(a.first>f.first && f.first>b.first)){
                ans +=2;
            }else if((a.second<f.second && f.second<b.second) ||(a.second>f.second && f.second>b.second)){
                ans +=2;
            }
            
        }

    
        

        cout<<ans<<"\n";
        ans = 0;




        
    }

}