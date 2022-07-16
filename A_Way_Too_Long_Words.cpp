#include<iostream>
#include<string.h>
using namespace std;
 
int main() {

    int n = 0;
    string a[100];
    string b;
    
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>a[i];

        if(a[i].length() > 10){

            int lenght = a[i].length();
            char firstLetter = a[i][0];
            char lastLetter = a[i][lenght-1];

            a[i] = firstLetter;
            a[i].insert(1,to_string(lenght-2));
            a[i].insert(a[i].end(), lastLetter);
           
        }
        
    }

    for(int i = 0; i < n; i++){

        cout<<a[i]<<endl;

    }




    return 0;
}
