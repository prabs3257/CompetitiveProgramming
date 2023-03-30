 
#include<bits/stdc++.h>
using namespace std;
 
#define INF 999
 
int main(){
    
    int n = 4, m = 12;
       
    
    // cout<<"Number of Vertices : ";
    // cin>>n;
 
        
    // cout<<"Number of Edges : ";
    // cin>>m;
       cout<<endl;
        // int AdjM[n][n];
        //    for(int i = 0; i < n; i++){
            
        //       for(int j = 0; j < n; j++){
        //               AdjM[i][j] = INF;
        //       }
               
        // }
        
           
    //    int d = 0;
    //    cout<<"Directed (0) or Undirected(1): ";
    //   //  cin>>d;
    //    cout<<endl;
    //    cout<<"input edge : "<<endl;
 
             int AdjM[4][4] = { { 7, 5, INF, INF },
                        { 7, INF, INF, 2 },
                        { INF, 3, INF, INF },
                        { 4, INF,1,INF}};
       
    //    for(int i = 0; i < m; i++){
        
    //           int x = 0, y = 0;
    //           cin>>x>>y;
    //           cout<<"Weight : "<<endl;
    //            int w = 0;
    //                  cin>>w;
              
    //           AdjM[x][y] = w;
                    
    //             if(d == 1){
    //                 AdjM[y][x] = w;
    //             }
    //    }
       
    //     for(int i = 0; i < n; i++){
            
    //           for(int j = 0; j < n; j++){
    //                   cout<<AdjM[i][j]<<" ";
    //           }
    //            cout<<"\n";
    //     }
 
        cout<<"*******"<<endl;
 
 
         for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (AdjM[i][k] + AdjM[k][j] < AdjM[i][j])
                        AdjM[i][j] = AdjM[i][k] + AdjM[k][j];
                }
            }
 
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (AdjM[i][j] == INF)
                    cout<<"INF";
                else
                    cout<<AdjM[i][j]<<" ";
                }
            printf("\n");
        }
 
 
        cout<<"*****"<<endl;
        }
 
 
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (AdjM[i][j] == INF)
                    cout<<"INF";
                else
                    cout<<AdjM[i][j]<<" ";
                }
            printf("\n");
        }
    
 

        
         
        return 0;
        
}
 