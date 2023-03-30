#include<bits/stdc++.h>
using namespace std;

vector<int> eClosure(int table[10][4], int start){
	
	
	vector<int> ans;
	
	stack<int> st;
	
	st.push(start);
	ans.push_back(start);
	
	while(!st.empty()){
		
		int top = st.top();
		st.pop();
		if(table[top][2] != -1){
			st.push(table[top][2]);
			ans.push_back(table[top][2]);
		}
		if(table[top][3] != -1){
			st.push(table[top][3]);
			ans.push_back(table[top][3]);
		}
		
	}
	
	
	return ans;
}


vector<int> checkWithClosure(int table[10][4], int a, vector<int> closure){

    vector<int> res;

    for(int i = 0; i < closure.size(); i++){
        
        if(table[closure[i]][a] != -1){
            res.push_back(table[closure[i]][a]);
        }
    }

    vector<vector<int>> closures;

    for(int i = 0; i < res.size(); i++){
        closures.push_back(eClosure(table, res[i]));
    }

    

    vector<int> fAns;

    for(int i = 0; i < closures[0].size(); i++){
        fAns.push_back(closures[0][i]);
    }

    for(int i = 1; i < closures.size(); i++){

        for(int j = 0; j < closures[i].size(); j++){

            for(int k = 0; k < fAns.size(); k++){

                if(closures[i][j] != fAns[k]){

                    fAns.push_back(closures[i][j]);
                    break;
                }
            }
        }
    }


    return fAns;
    
}




vector<vector<int>> subsetConstruct(int table[10][4]){
	
	vector<int> start = eClosure(table,0);

	vector<vector<int>> ans;

    stack<vector<int>> st;

    vector<pair<vector<int>, pair<vector<int>, vector<int>>>> dfa;

    sort(start.begin(), start.end());

    st.push(start);

    vector<vector<int>> states;
    states.push_back(start);
    

    while(!st.empty()){
        vector<int> temp = st.top();
        st.pop();
        vector<int> tempWithA = checkWithClosure(table, 0, temp);
        vector<int> tempWithB = checkWithClosure(table, 1, temp);
        sort(tempWithA.begin(), tempWithA.end());
        sort(tempWithB.begin(), tempWithB.end());
        bool foundA = false;
        bool foundB = false;

        dfa.push_back(make_pair(temp, make_pair(tempWithA, tempWithB)));


        for(int i = 0; i < states.size(); i++){

            if(tempWithA == states[i]){
                foundA = true;
                break;
            }
        }
        for(int i = 0; i < states.size(); i++){

            if(tempWithB == states[i]){
                foundB = true;
                break;
            }
        }
        if(foundA == false){
            st.push(tempWithA);
            states.push_back(tempWithA);
        }
        if(foundB == false){
            st.push(tempWithB);
            states.push_back(tempWithB);
        }


    }

    for(int i = 0; i < dfa.size(); i++){

        for(int j = 0; j < dfa[i].first.size(); j++){

            cout<<dfa[i].first[j]<<" ";
        }
        cout<<"     ";

        for(int k = 0; k < dfa[i].second.first.size(); k++){

            cout<<dfa[i].second.first[k]<<" ";
        }
        cout<<"     ";

        for(int l = 0; l < dfa[i].second.second.size(); l++){

            cout<<dfa[i].second.second[l]<<" ";
        }
        cout<<endl;
    }
	
	
}


int main(){
	
	int table[10][4];
	
	for (int i = 0; i < 10; i++)
  		for (int j = 0; j < 4; j++)
    		table[i][j] = -1;
	
	table[0][2] = 1;
	table[0][3] = 7;
	table[1][2] = 2;
	table[1][3] = 4;
	table[3][2] = 6;
	table[5][2] = 6;
	table[6][2] = 7;
	table[6][3] = 1;
    

    table[2][0] = 3;
    table[4][1] = 5;
    table[7][0] = 8;
    table[8][1] = 9;

	
	//  vector<int> res = eClosure(table,0);
    // // for(int i = 0; i < res.size(); i++){
	// // 	cout<<res[i]<<"	";		
	// // }

    // vector<int> ans = checkWithClosure(table, 0, res);

    // for(int i = 0; i < ans.size(); i++){
	// 	cout<<ans[i]<<"	";		
	// }

    subsetConstruct(table);
	
	
	return 0;
}