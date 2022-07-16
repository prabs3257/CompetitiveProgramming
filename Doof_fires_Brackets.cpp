#include<bits/stdc++.h>

using namespace std;


void fastIO(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main(){

    
    fastIO();
    

    int n = 0;

    cin>>n;
    

    while(n--){

        
        
        string s;
        cin>>s;
        

        

        int strSize = (int)s.size();
        

        vector<int> ans(strSize,-1);

        stack<int> stk;
        

        

        for(int j = (strSize-1); j >=0; j--){

            

            if(s[j] == ')'){

                stk.push(j);
            }else if(s[j] == '('){

                if(stk.empty()){
                    ans[j] = -1;
                }else{

                    ans[j] = stk.top();
                    stk.pop();
                }
                
            }
        }

        

        int q = 0;

        cin>>q;

        while(q--){

            int t = 0;
            cin>>t;

            t--;
            if(s[t] == ')'){

                if(ans[t+1] == -1){
                    cout<<ans[t+1]<<endl;
                }else{
                    cout<<ans[t+1]+1<<endl;
                }
                
            }else{

                if(ans[t] == -1){
                    cout<<ans[t]<<endl;
                }else{
                    cout<<ans[t]+1<<endl;
                }
            }
            
        }
        

        
    }

    return 0;

    
}