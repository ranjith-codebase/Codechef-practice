#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q,cnt=0;
	    cin>>n>>q;
	    
	    vector<int>v(n);
	    for(int i=0; i<n ;i++){
	        cin>>v[i];
	    }
	    
	    for(int i=0 ; i<q ;i++){
	        int l, r;
	        cin>>l>>r;
	        
	        int diff = r-l+1;
	        
	        if(diff%2 != 0) cnt++;
	        
	    }
	    
	   int sum = accumulate(v.begin(),v.end(),0);
	   
	   cout<<sum+cnt<<endl;
   
	}
return 0;
}
