#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(ll i=0;i<n;i++)
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

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    int t = 1;
    cin >> t;
    while(t--) {

        ll n = 0;
        cin>>n;

        vector<ll> b(n);

        loop(i,n){
            cin>>b[i];
        }
        vector<vector<ll>> v;
        
        for(ll j = 0; j<n; j++){

            int maxIndex = max_element(b.begin(), b.end()) -b.begin();

            if(maxIndex != n-j-1){
                
                v.push_back({maxIndex+1,n-j,1});
            }

            b.erase(b.begin()+maxIndex);
            //cout<<maxIndex+1<<" "<<last+1<<" "<<"1"<<"\n"; 
            

        }


        cout<<v.size()<<"\n";
        
        for(auto i : v){
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<"\n";
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