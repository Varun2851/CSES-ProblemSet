#include<bits/stdc++.h>
using namespace std;

void print(int n){

	if(n == 2 or n == 3){
		cout<<"NO SOLUTION";
		return;
	}

	int value = 2;

	while(value <= n){
		cout<<value<<" ";
		value += 2;
	}
	value = 1;

	while(value <= n){
		cout<<value<<" ";
		value += 2;
	}
}

int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n ;
	cin>>n;

	print(n);

return 0;

}