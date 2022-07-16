#include<bits/stdc++.h>
using namespace std;

int main(){

     long long int n = 0,m = 0,a = 0;
     long long int x = 0;
     cin>>n>>m>>a;

    
     x = m%a == 0 ? m/a : (m/a)+1;
     x *=  n%a == 0 ? n/a : (n/a)+1;
     cout<<x;

    

    return 0;
}