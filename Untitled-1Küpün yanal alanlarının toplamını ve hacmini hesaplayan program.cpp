#include <iostream>
using namespace std;
int main(){
    float kupunBirKenari;
    float kupunYanalAlanlarininToplami;
    float kupunHacmi;

     cout<<"Kupun Kenarini Giriniz:"<<endl;
     cin>>kupunBirKenari;

     kupunYanalAlanlarininToplami=6*kupunBirKenari*kupunBirKenari;
     kupunHacmi=kupunBirKenari*kupunBirKenari*kupunBirKenari;

     cout<<"Kupun yanal alanlarinin toplami="<<kupunYanalAlanlarininToplami<<endl;
     cout<<"Kupun hacmi= " <<kupunHacmi;
     
    return 0;
}