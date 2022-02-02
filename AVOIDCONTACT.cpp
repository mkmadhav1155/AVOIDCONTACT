#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while (t){
	    
	int x,y;    
	cin>>x>>y;
	x-=y;
	if(y==0){
	    cout<<x<<"\n";
	}
	else if(x==0){
	    cout<<(2*y)-1<<"\n";
	}
	else{
	    cout<<(2*y)+x<<"\n";
	}
	
	t--;
	}
	return 0;
}
