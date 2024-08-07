// problem link
// https://www.codechef.com/START146D/problems/OLYMPICS24


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int g, s, b;
	cin >> g >> s >> b;
	int req = 0;
	
	if(g < 5){
	    req += 5-g;
	}
	
	if(s < 5){
	    req += 5-s;
	}
	
	if(b < 5){
	    req += 5-b;
	}
	
	cout << req << endl;

}
