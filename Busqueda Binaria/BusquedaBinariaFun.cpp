#include <bits/stdc++.h>
using namespace std;
int elementos,numero,ar[100000];
int busquedaBinaria(int q){
    long long principio=0, finale = elementos-1, medio;
    while(principio!=finale){
        medio=(principio+finale)/2;
        if(ar[medio]<q){
            principio=medio+1;
        }
        else{
            finale=medio;
        }
    }
    return finale;
}
int main(){

cin>>elementos;

for( int i = 0; i < elementos; i++ ){
	cin>>ar[i];
}
sort(ar,ar+elementos);

cin>>numero;

cout<<busquedaBinaria(numero)+1;

return 0;	
}
