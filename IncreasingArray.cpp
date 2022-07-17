#include<iostream>
using namespace std;

int solve(int arr , int n){

	int count = 0;

	for(int i= 0; i<n; i++){
		if(arr[i] < arr[i+1]){
			continue;
		}
		else{
			count += arr[i]+1-arr[i+1];
			arr[i+1] = arr[i]+1;
		}
	}
	return count;
}

int main(){
	int n;
	cin>>n;
	vector<int>arr(n);

	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());

	cout<<solve(arr,n);

}