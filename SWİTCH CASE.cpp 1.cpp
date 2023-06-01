#include <iostream>
using namespace std;
int main(){
    int stokAdet;
    string islem;

    cout<<"stok miktarini giriniz:";
    cin>>stokAdet;

    cout<<"Depodan urun cikarmak icin - yaziniz, urun eklemek icin + yaziniz"<<endl;
    cin>>islem;

    int islemYapilacakUrunAdeti;

    switch (islem) {
        case '+':
          cout<<"Kac adet urun ekleyeceksiniz"<<endl;
          cin>>islemYapilacakUrunAdeti;
          stokAdet += islemYapilacakUrunAdeti;
          break;
        case '-':
          cout<<"Kac adet urun cikaracaksiniz"<<endl;
          cin>>islemYapilacakUrunAdeti;
          stokAdet+= islemYapilacakUrunAdeti;
          break;
        default:
          cout<<"depodaki mevcut urun adeti "<<stokAdet; 
    }
    return 0;
}