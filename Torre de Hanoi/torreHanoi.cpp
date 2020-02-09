//Intento 1 de optimización

#include <bits/stdc++.h>
using namespace std;
int memoriaDinamica[101];
int torreHanoi(int platos){
	if( platos == 1 ){
		return 1;
	}
	if( memoriaDinamica[platos] != 0 ){
		return memoriaDinamica[platos];
	}
	else{
		memoriaDinamica[platos] = 2*torreHanoi(platos-1)+1;
		return memoriaDinamica[platos];
	}
}

int main(){

ios_base::sync_with_stdio(0);
cin.tie(0);

int numeroPlatos;

cin>>numeroPlatos;

cout<<torreHanoi(numeroPlatos);

return 0;
}