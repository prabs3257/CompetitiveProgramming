#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define revloop(i, n) for(int i=n-1;i>=0;i--)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
bool isPrime(int n);

//=======================


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   
    int ans = 0;
    int n = 0;
   // cin>>n;

    int n = stickers.size()
    unordered_map<char,int> mpp[n];
   // string stickers[n];
    loop(i,n){

       
        //cin>>stickers[i];

        loop(j,stickers[i].length()){
            mpp[i][stickers[i][j]] = 0;
        }

    }

    // string wording;

    // cin>>wording;

    bool found = true;
    loop(i,target.length()){

        bool isThere = false;
        loop(j,n){


            if(mpp[j].find(target[i]) != mpp[j].end()){

                if(mpp[j][target[i]] > 0){
                    isThere = true;
                    mpp[j][target[i]]--;
                    break;
                }else if(mpp[j][target[i]] == 0){
                    isThere = true;
                    ans++;
                    loop(k,stickers[j].length()){
                        mpp[j][stickers[j][k]]++;
                    }
                    break;
                }

            }else {
                isThere = false;
            }

            
        }
        if(isThere == false){
                found = false;
                cout<<"-1"<<"\n";
                break;
            }
        
    }

    if(found == true){
        cout<<ans<<"\n";
    }

    // loop(i,n){
    //     for(auto it : mpp[i]) {
	// 	cout << it.first << " " << it.second << endl; 
	// }
    // cout<<endl;
    // }

    return 0;
}




bool isPrime(int n){
  if(n==1) return false;
  if(n==2) return true;
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
  return true;
}