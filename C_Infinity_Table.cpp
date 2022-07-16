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

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    ll t = 1;
    cin >> t;
    while(t--) {

        ll k = 0;
        cin>>k;
        ll row = 0, col = 0;

        ll i = 1;
        ll y = 0;
        bool found = false;

        while(found == false){

            i += (y*2);
            
            if(k == i){
                cout<<(y+1)<<" "<<(y+1)<<"\n";
                found = true;
                break;
            }else if( (k <= (i + y)) && (k >= (i - y))){

                if(k < i && k >= (i - y)){
                    col = y+1;
                    row = 2*col - (pow(col,2)-k) -1;
                    cout<<row<<" "<<col<<"\n";
                    found = true;
                    break;
                }else if(k > i && k <= (i + y)){
                    row = y+1;
                    col = pow(row,2) - k + 1;
                    cout<<row<<" "<<col<<"\n";
                    found = true;
                    break;
                }
            }

            y++;
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