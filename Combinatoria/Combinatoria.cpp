#include <bits/stdc++.h>
using namespace std;

int combinatoria(int n, int k){
	if( k == 0 || k == n ){
		return 1;
	}
	else{
		return combinatoria(n-1,k-1) + combinatoria(n-1,k);
	}
}

int main(){

int n,k;

cin>>n>>k;

cout<<combinatoria(n,k);

return 0;
}
