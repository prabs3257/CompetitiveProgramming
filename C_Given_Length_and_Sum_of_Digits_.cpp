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

int sumOfDig(int n){

    int sum = 0;

    while(n > 0){

        sum += n%10;
        n/=10;
    }
    return sum;
}

int revNum(int n){
    int reverse = 0;

    int rem = 0;
    while(n!=0){    
        rem=n%10;      
        reverse=reverse*10+rem;    
        n/=10;    
    }    

    return reverse;
}

int numOfDig(int n){
    int num = 0;

    while(n > 0){
        n/=10;
    }
    return num;
}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    int m = 0, s = 0;
    cin>>m>>s;
    int a[m];

    if(s == 0){
        if(m == 1){
            cout<<"0"<<" "<<"0"<<"\n";
            return 0;
        }else{
            cout<<"-1"<<" "<<"-1"<<"\n";
            return 0;
        }
        
    }

    
    loop(i,m){

        a[i] = min(s,9);
        s-=a[i];
        
    }

    if(s > 0){

        cout<<"-1"<<" "<<"-1"<<"\n";
        return 0;
    }
    int b[m];
    for(int i = m - 1; i >= 0; i--){
        b[m-1-i] = a[i];
    }
    loop(i,m){
        if(b[i] != 0){
            b[i]--;
            b[0]++;
            break;
        }
    }
    loop(i,m){
        cout<<b[i];
    }
    cout<<" ";
    loop(i,m){
        cout<<a[i];
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