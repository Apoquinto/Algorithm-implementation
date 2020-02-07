#include <bits/stdc++.h>
using namespace std;

bool p[10000000];

void cribaErato( int n ){
	for( int i=2; i<=n ;i++ ){
		if( !p[i] ){
			cout<<i<<' ';
			for( int j=2; i*j<=n; j++ ){
				p[i*j]=true;
			}
		}
	}
}

int main(){

int n;

cin>>n;

cribaErato(n);

return 0;

}

