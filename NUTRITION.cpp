#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    
	    vector<int>v(n);
	    for(int i=0; i<n ;i++){
	        cin>>v[i];
	    }
	    
	    map<int,int>mpp;
	    for(int i=0; i<n ;i++){
	        int x;
	        cin>>x;
	        
	        mpp[v[i]] = max(mpp[v[i]],x);
	        
	    }
	    
	    for(auto it: mpp){
	        sum+=it.second;
	    }
	    
	    cout<<sum<<endl;
	    
	}
return 0;
}
