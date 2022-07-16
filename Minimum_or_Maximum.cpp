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

    ll t = 1;
    cin >> t;
    while(t--) {

        ll n = 0;
        vl a;

        cin>>n;
        loop(i,n){
            ll x = 0;
            cin>>x;
            a.pb(x);
        }

        if(n == 1){
            cout<<"YES"<<"\n";
            continue;
        }

        ll min = a[0], max = a[0];

        int flag = 1;
        for(ll i = 1; i < n; i++){

            if(a[i] >= max){
                max = a[i];
            }
            if(a[i] <= min){
                min = a[i];
            }
            if(a[i] == min){
                continue;
            }else if(a[i] == max){
                continue;
            }else{
                flag = 0;
                break;
            }
            
        }

        if(flag == 0){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
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