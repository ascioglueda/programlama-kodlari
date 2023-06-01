#include <iostream>
using namespace std;
int main(){
    int tamSayi;
    float kesirliSayi;
    char karakter;
    bool anahtar;

    cout <<"lutfen bir tam sayi,bir kesirli sayi,bir karakter ve bir anahtar giriniz:"<<endl;
    
    cin>>tamSayi;
    cin>>kesirliSayi;
    cin>>karakter;
    cin>>anahtar;

    cout<<"Kullanicinin girmis oldugu degerleri:"<<tamSayi<<" "<<karakter<<" "<<anahtar<<endl;

    return 0;
}