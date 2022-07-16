#include<bits/stdc++.h>

using namespace std;



int MinTime(vector<int> a){

    sort(a.begin(),a.end());

    int time = 0;
    int index = a.size()-3;

    int burner[2];

    burner[0] = a[a.size()-1];
    burner[1] = a[a.size()-2];


      while(true){

        if(index < 0 && (burner[0] <= 0 || burner[0] >a[a.size()-1]) && (burner[1] <= 0 || burner[1] >a[a.size()-1])){

            break;
        }


        burner[0]--;
        burner[1]--;

        if(burner[0] == 0){
            burner[0] = a[index];
            index--;
        }
        if(burner[1] == 0){
            burner[1] = a[index];
            index--;
        }
        time++;
    }

    return time;

}

int main(){

    int T = 0;
    cin>>T;

    

    for(int i = 0; i < T; i++){

        int n = 0;
        cin>>n;
        vector<int> a;

        for(int j = 0; j < n; j++){

            int temp = 0;
            cin>>temp;
            a.push_back(temp);

        }

        cout<<MinTime(a)<<endl;

    }
    

   
}