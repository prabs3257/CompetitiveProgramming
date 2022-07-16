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
    int caseNo = 1;
    while(t--) {
        string a;
        cin>>a;

        char list[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

        int fl = 0;
        string ans = "";

        if(a[a.size()-1] == 'y'){
            ans = "nobody";
            cout<<"Case #"<<caseNo<<": "<<a<<" is ruled by "<<ans<<"."<<"\n";
            caseNo++;
            continue;
        }

        loop(i,10){

            if(a[a.size()-1] == list[i]){
                fl = 1;
                ans = "Alice";
                break;
            }
        }

        if(fl == 0){
            ans = "Bob";
        }

        cout<<"Case #"<<caseNo<<": "<<a<<" is ruled by "<<ans<<"."<<"\n";
        caseNo++;
        
        
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