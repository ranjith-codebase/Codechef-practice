#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    string s;
	    cin>>s;
	    
	    int scnt = 0, pcnt = 0;

        for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'S')
            scnt++;
        else
            pcnt++;
        }
        

	    if(scnt>=k) cout<<s.size()<<endl;
	    else cout<<n+k-scnt-1<<endl;
	    
	}
return 0;
}
