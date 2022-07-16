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


bool fxn(pair<int,int> a, pair<int,int> b){
    if(a.first>b.first){
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

        int n = 0;
        cin>>n;
        
        priority_queue<pair<int,int>> pq;
        vector<vector<int>> ans;

        int count = 0;

        loop(i,n){
            int x = 0;
            cin>>x;
            if(x>0) pq.push(mp(x,i));
        }


        while(pq.size() > 1){

            auto top = pq.top();
            pq.pop();
            auto sec = pq.top();
            pq.pop();
            top.first--;
            sec.first--;

            ans.push_back({top.second, sec.second});

            if(top.first>0){
                pq.push(top);
            }
            if(sec.first>0){
                pq.push(sec);
            }

        }

        cout<<ans.size()<<"\n";

        for(auto i : ans){
            cout<<i[0]+1<<" "<<i[1]+1<<"\n";
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