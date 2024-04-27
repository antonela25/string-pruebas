#include<iostream>
#include<string.h>

using namespace std;
int main(){
 /*
   string palabra = "hola mundo";

   cout << "lon length devuelve: " << palabra.length () << endl;
   cout << "con size devuelve : " << palabra.size() << endl;
*/
/*
string userName = "";

if (userName.empty()) {
    cout << "el usuario no ingreso nombre" << endl;
}else {
cout << "bienvenido " << userName << endl;
}
*/
/*
string userName = "pepito";

cout << "esta vacio userName?? " << (userName.empty () ? "si ": "no ")<<userName;

*/

string fraseIncompleta ="hola a todes quiero que agreguen algo a la frese ";

fraseIncompleta.insert (fraseIncompleta.length() , "para terminarla" ) ;
 cout << fraseIncompleta;

   return 0;
}
