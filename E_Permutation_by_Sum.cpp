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

        int n = 0, l = 0, r= 0, s = 0;
        cin>>n>>l>>r>>s;
        
        // if(s > n){
        //     cout<<"-1"<<"\n";
        //     continue;
        // }else if(r-l+1 > s){
        //     cout<<"-1"<<"\n";
        //     continue;
        // }

        int a[n+1] = {0};
        map<int,int> mpp;
        int tempSum = s;

        if(r-l+1 >1){
            s--;
        }
        
        for(int i = 1; i <= n; i++){
            mpp[i] = 0;
        }
        loop(i , r-l+1){
            a[l+i] = s;
            mpp[s] = 1;
            s-=s-1;
        }
        
        int j = n;
        for(int i = 1; i < n+1; i++){

            if(i>=(l) && i<=(r)){continue;}

            while(true){
                if(mpp[j] == 0){
                    a[i] = j;
                    j--;
                    break;
                }else{
                    j--;
                }
            }
        
        }
        bool found = false;

        for(int i = 1; i < n+1; i++){
            if(a[i] == 0 || a[i] > n){
                cout<<"-1"<<"\n";
                found = true;
                break;
            }
        }

        if(found == false){
            int temp = 0;
        loop(i , r-l+1){
            temp += a[l+i];
        }
        if(temp != tempSum){
            cout<<"-1"<<"\n";
            continue;
        }
        }

        if(found == false){
            for(int i = 1; i < n+1; i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
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