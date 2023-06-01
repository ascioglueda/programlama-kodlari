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
void ogrenciOlustur(Ogrenci* yeniOgrenci,int numara,string isim){
    yeniOgrenci->numara=numara;
    yeniOgrenci->isim=isim;
}
void ogrenciyiGoster(Ogrenci ogr){
    cout<<"Ogrenci bilgileri:\nNumara:"<<ogr.numara<<"\nIsim: "<<ogr.isim<<endl;
}
void ogrenciyiSil(Ogrenci* ogr){//bir şeyi kalıcı olarak değiştirmek istiyorsak pointer kullanmamız lazım.
   ogr->isim="Boyle bir ogrenci bulunmamaktadir. ";
   ogr->numara=0;
}
int main()
{
    Ogrenci ogr2;
    ogrenciOlustur(&ogr2,552,"OZAN");
    ogrenciyiGoster(ogr2);
    ogrenciyiSil(&ogr2);
    ogrenciyiGoster(ogr2);
    
    return 0;
}
