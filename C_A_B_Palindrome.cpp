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
    //cin >> t;
    while(t--) {

        int a = 4, b = 8;
        //cin>>a>>b;
        int tempA = a,tempB = b;
        int n = a+b;
        bool flag = false;
        string x = "01????101?1?";
       // cin>>x;

        if(n == 1){
            if (x[0] == '?')
            {
                if (a == 1)
                {
                    cout << "0"
                         << "\n";
                    continue;
                }
                else if (b == 1)
                {
                    cout << "1"
                         << "\n";
                    continue;
                }
            }else if(x[0] == '1'){
                if(b != 1){
                    cout<<"-1"<<"\n";
                    continue;
                }
            }else if(x[0] == '0'){
                if(a != 1){
                    cout<<"-1"<<"\n";
                    continue;
                }
            }
        }

        loop(i,n){

            if(x[i] == '1'){
                b--;
            }else if(x[i] == '0'){
                a--;
            }
        }

        loop(i,n){

            if(x[i] == '?'){
                if(x[(n-1)-i] == '?'){

                    if(((n-1)-i) != i){

                        if (a >= 2)
                        {
                            x[i] = '0';
                            x[(n - 1) - i] = '0';
                            a -= 2;
                        }
                        else if (b >= 2)
                        {
                            x[i] = '1';
                            x[(n - 1) - i] = '1';
                            b -= 2;
                        }
                        else
                        {
                            cout << "-1"
                                 << "\n";
                            flag = true;
                            break;
                        }
                    }else{

                        if(a>0){
                            x[i] = '0';
                            a--;
                        }else if(b>0){
                            x[i] = '1';
                            b--;
                        }
                    }
                   
                }else if(x[(n-1)-i] == '1'){

                    if(b > 0){
                        x[i] = '1';
                        b--;
                    }else{
                        cout<<"-1"<<"\n";
                        flag = true;
                        break;
                    }
                }else if(x[(n-1)-i] == '0'){

                    if(a > 0){
                        x[i] = '0';
                        a--;
                    }else{
                        cout<<"-1"<<"\n";
                        flag = true;
                        break;
                    }
                }


            }
        }
       
        if(flag == false){

            int numA = 0, numB = 0;
            loop(i, n)
            {
                if (x[i] == '0')
                {
                    numA++;
                }
                else if (x[i] == '1')
                {
                    numB++;
                }
            }
            if (numA != tempA || numB != tempB)
            {
                flag = true;
                cout << "-1"
                     << "\n";
                continue;
            }

            loop(i, n)
            {
                if (x[i] != x[(n - 1) - i])
                {
                    flag = true;
                    cout << "-1"
                         << "\n";
                    break;
                }
            }
        }
        if(flag == false){
            cout<<x<<"\n";
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