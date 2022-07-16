#include<bits/stdc++.h>
using namespace std;

bool subSum(vector<int> a, int n, int sum){
    if(sum == 0){
        return true;
    }
    if(n == 0){
        return false;
    }

    if(a[n-1] <= sum){
        return subSum(a,n-1,sum-a[n-1]) || subSum(a,n-1,sum);
    }
    return subSum(a,n-1,sum);
}

int main(){
    vector<int> a = {1,200,3,4,5};
    int n = 5;
    int sum = 2;

    cout<<subSum(a,n,sum);
    return 0;

}