// problem link
// https://www.codechef.com/START146D/problems/NOWINNER


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, m;
	    cin >> a >> b >> c >> m;
	    
	    if(abs(a-b) <= m || abs(b-c) <= m || abs(a-c) <= m){
	        cout << "YES\n";
	    }else{
	        cout << "NO\n";
	    }
	}

}
