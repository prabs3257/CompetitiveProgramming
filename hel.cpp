#include<iostream>
using namespace std;
 
int main() {

	cout<<"Hello world\a";
 
	int n[100];
	int b[100];
	int t = 0;
	int elonScore = 0, wifeScore = 0;
	bool flag = true;

	scanf("%d",&t);

	for(int i = 0; i < t; i++){

		
		scanf("%d", &n[i]);
	}
	

	for(int i = 0; i < t ; i++){
		int temp = n[i];
		for(int j = 0; j <n[i] ; j++){
			if(flag){
			elonScore += temp;
			temp--;
			flag = false;
			}else{
			wifeScore += temp;
			temp--;
			flag = true;
			}

		}

		n[i] = elonScore;
		b[i] = wifeScore;

		elonScore = 0;
		wifeScore = 0;
	}

	for(int i = 0 ; i < t; i++){

		printf("%d %d\n", n[i],b[i]);
	}

 return 0;
}