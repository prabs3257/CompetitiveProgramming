#include<bits/stdc++.h>

using namespace std;




int CalcPow(int i, int j, int sheets, int k){

    return k+1 - abs(i-j) - sheets;


}

int MaxPairs(string a, int k){

    int ans = 0;

    for(int i = 0; i<a.size(); i++){

        if(a[i] == 'M'){

            int sheets = 0;

            for(int j = i; j < a.size(); j++){

                if(a[j] == 'X'){
                    break;
                }

                if(a[j] == ':'){
                    sheets++;
                }

                if(a[j] == 'I'){

                    if(CalcPow(i , j , sheets, k)>0){
                        a[i] = 0;
                        a[j] = 0;
                        ans++;
                        break;
                    }
                }
            }
        }else if(a[i] == 'I'){

            int sheets = 0;

             for(int j = i; j < a.size(); j++){

                  if(a[j] == 'X'){
                    break;
                }
                 
                 if(a[j] == ':'){
                    sheets++;
                }

                  if(a[j] == 'M'){

                     if(CalcPow(i , j , sheets, k)>0){
                        a[i] = 0;
                        a[j] = 0;
                        ans++;
                        break;
                    }
                }
            }
        }
    }

    return ans;
}

int main(){

    string a;

    int T = 0;
    cin>>T;

    for(int i = 0; i < T;i++){

        int N = 0, K = 0;

        cin>>N;
        cin>>K;

        cin>>a;

        cout<<MaxPairs(a,K)<<endl;
    }
    

   
   
}