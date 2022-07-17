 
#include <bits/stdc++.h>
using namespace std;

int solve(string s, int n){
    int maxlen = 1;
    int count =  1;
    

    for(int i = 1; i<n; i++){
        if(s[i] == s[i-1]){
            count++;
            maxlen = max(count,maxlen);
        }
        else{
            count = 1;
            maxlen = max(count,maxlen);
        }
    }
    return maxlen;
    
}

int main() {
    // your code goes here
    string s;
    cin>>s;
    int n = s.size();
    cout<<solve(s,n);
    return 0;
}

