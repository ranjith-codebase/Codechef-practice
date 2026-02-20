#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>v(n);
	    for(int i=0 ;i<n ;i++) cin>>v[i];
	    
	    sort(v.begin(),v.end());
	    
	    int sum = v[0];
	    
	    for(int i=1 ;i<n ;i++){
	        int smt  = v[i]-i;
	        
	        if(smt<0) sum+=0;
	        else sum+=smt;
	    }
	    
	    cout<<sum<<endl;
	    
	}
return 0;
}
