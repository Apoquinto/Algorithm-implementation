#include <bits/stdc++.h>
using namespace std;
int elementos,numero,ar[100000];
int busquedaBinaria( int q, int inicio, int finale ){
    if ( inicio == finale ) return inicio;

    int medio =  ( ( inicio + finale ) / 2 );
    
    if ( ar[medio] < q ) return busquedaBinaria( q, medio + 1, finale);
    else return busquedaBinaria( q, inicio, medio );

}

int main(){

cin>>elementos;

for( int i = 0; i < elementos; i++ ){
	cin>>ar[i];
}
sort(ar,ar+elementos);

cin>>numero;

cout<<busquedaBinaria( numero, 0, elementos-1 )+1;

return 0;	
}
