#include <iostream>
using namespace std;
struct Ogrenci{
    int numara ;
    string isim;

};
void ismiDegistir(Ogrenci* ismiDegistirilecekOgrenci,string koyulacakIsim)
{
   ismiDegistirilecekOgrenci->isim = koyulacakIsim;
}

int main()
{
    Ogrenci ogr1;
    ogr1.isim="Eda";
    ismiDegistir(&ogr1,"Ozan");
    cout<<ogr1.isim<<endl;
    return 0;
}
