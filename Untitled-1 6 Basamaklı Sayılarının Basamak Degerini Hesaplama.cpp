#include <iostream>
using namespace std;
int main(){
    int sayi,yuzbinler,onbinler,binler,yuzler,onlar,birler,toplam;
    cout<<"Lutfen 6 basamaklı bir sayi giriniz:"<<endl;
    cin>>sayi;
    yuzbinler=sayi/100000;
    onbinler=(sayi%10000)/1000;
    binler=(sayi%10000)/1000;
    yuzler=(sayi%1000)/100;
    onlar=(sayi%100)/10;
    birler=sayi%10;

      cout<<yuzbinler<<" "<<onbinler<<" "<<binler<<" "<<yuzler<<" "<<onlar<<" "<<birler<<endl;
      toplam=yuzbinler+onbinler+binler+yuzler+onlar+birler;
      cout<<"Sayinin sayi degerleri toplami ="<<toplam;
    return 0;
}