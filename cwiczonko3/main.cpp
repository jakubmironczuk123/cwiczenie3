#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
#include <sstream>
using namespace std;

struct Probka
{
 double t;
 double x;
 Probka ( double _t, double _x)
 {
  t=_t;
  x=_x;
 }

};
vector <Probka> wczytaj (string abc)

{
    vector <Probka> tablica;
    ifstream plik(abc);
    string linia;
    while (getline(plik,linia))

{


stringstream ss(linia); // inicjalizujemy stringstream zawartosci¹linii
double _t, _x; // w tych zmiennych zapiszemy odczytane wartoœci
ss >> _t; // odczytujemy z linii pierwsz¹ liczbê
ss.ignore(); // ignorujemy przecinek
ss >> _x; // odczytujemy z linii drug¹ liczbê
cout << _t<<" "<<_x<< endl;
}
plik.close();
return tablica;

}



int main(int argc, char* argv[])
{
 if(argc !=2)
 {
     return -1;
 }
 vector <Probka> dane=wczytaj(argv[1]);
    return 0;
}
