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

bool fxn(int a,int b){
    if(a>b){
        return true;
    }else{
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    int t = 1;
    cin >> t;
    while(t--) {

        ll n = 0;
        cin>>n;
        ll index = 0;
        ll b[n+2];
        bool done = false;
        loop(i,(n+2)){
            cin>>b[i];
        }

        sort(b,b+n+2,fxn);

        ll tempSum1 = b[0];
        ll tempSum2 = 0;
        for(int i = 1; i < n+2; i++){
            tempSum2 += b[i];
        }
        for(int i = 1; i < n+2; i++){
            if(tempSum2 - b[i] == tempSum1){
                index = i;
                done = true;
                break;
            }
        }
        if(done == true){
            for(int i = 1; i < n+2; i++){
                if(i != index){
                    cout<<b[i]<<" ";
                }
            }
            cout<<"\n";
            continue;
        }else{
            ll tempSum3 = 0;
            for(int i = 2; i < n+2; i++){
                tempSum3 += b[i];
            }

            if(b[1] == tempSum3){
                for(int i = 2; i < n+2; i++){
                    cout<<b[i]<<" ";
                }
                cout<<"\n";
            }else{
                cout<<"-1"<<"\n";
            }

        }
        
    }

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