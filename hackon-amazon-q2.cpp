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

    int q = 1;
    cin >> q;
    int temp = q;
    vpii v;
    while(q--) {

        int x = 0, y = 0;
        cin>>x>>y;

        v.pb(mp(x,y));
    }

    vi a;

    map<int, pair<int,int>> mpp;

    

    loop(i,temp){

        if(v[i].f == 1){
            a.pb(v[i].s);
            mpp[v[i].s] = mp(mpp[v[i].s].f +1, a.size()-1);
            
        }else if(v[i].f == 2){

           
            auto pr = std::max_element(mpp.begin(), mpp.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;

                    if(x.s.f > y.s.f){
                        return true;
                    }else if(x.s.f == y.s.f){
                        if(x.s.s > y.s.s){
                            return true;
                        }
                    }
                });

             //cout<<"ans : "<<mpp[pr->first].second<<endl;
                 a.erase(a.begin()+(mpp[pr->first].second));
            


        }
    }

    for(auto it : mpp) {
		cout << it.first << " " << it.second.first << " " << it.second.second<< endl; 
	}

    loop(i, a.size()){
        cout<<a[i]<<"   ";
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