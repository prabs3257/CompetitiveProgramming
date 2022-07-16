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

    int t = 1;
    cin >> t;
    while(t--) {

        int n = 0;
        cin>>n;

        string a[n];
        vpii v;

        loop(i,n){
            cin>>a[i];
        }
        loop(i,n){
            loop(j,n){
                if(a[i][j] == '*'){
                    v.pb(mp(i,j));
                }
            }
        }

        if(v[0].f == v[1].f){
            if(v[0].f == 0){
                a[v[0].f + 1][v[0].s] = '*';
                a[v[1].f + 1][v[1].s] = '*';
            }else{
                a[v[0].f - 1][v[0].s] = '*';
                a[v[1].f - 1][v[1].s] = '*';
            }
            loop(i,n){
                cout<<a[i]<<"\n";
            }
            continue;
        } 

        if(v[0].s == v[1].s){
            if(v[0].s == 0){
                a[v[0].f][v[0].s + 1] = '*';
                a[v[1].f][v[1].s + 1] = '*';
            }else{
                a[v[0].f][v[0].s - 1] = '*';
                a[v[1].f][v[1].s - 1] = '*';
            }
            loop(i,n){
                cout<<a[i]<<"\n";
            }
            continue;
        } 

        a[v[0].f][v[1].s] = '*';
        a[v[1].f][v[0].s] = '*';

        loop(i,n){
            cout<<a[i]<<"\n";
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