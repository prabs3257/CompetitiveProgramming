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
        string a;
        cin>>a;
        vector<char>v;
        loop(i,n){
            v.pb(a[i]);
        }

        if(n % 2 != 0){
            cout<<"NO"<<"\n";
            continue;
        }

        map<char, int> mpp;

        for (int i = 0; i < n; i++){
            mpp[a[i]]++;
        }
        int flag = 0;

        for (auto x : mpp){
            if(x.second > n/2){
                cout<<"NO";
                flag = 1;
                break;
            }
        }
        
        if(flag == 0){
            ll i = 0, j = 0, p = 0;
            cout<<"YES"<<"\n";

            vector<pair<int,char>>v;
    
            for(auto x: mpp){
                v.push_back(make_pair(x.second,x.first));
            }
            
            sort(v.begin(),v.end());
            
            vector<char>ans;
             for(i=0;i<v.size();i++){
                p=v[i].first;
                for(j=0;j<p;j++){
                    ans.pb(v[i].second);
                }
            }

            loop(i,n){
                cout<<ans[i];
            }
            cout<<endl;
      
            j=n/2;
            i=0;
            j--;
            char c;
            while(i<j){
                c=ans[i];
                ans[i]=ans[j];
                ans[j]=c;
                i++;j--;
            }
            
          

            loop(i,n){
                cout<<ans[i];
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